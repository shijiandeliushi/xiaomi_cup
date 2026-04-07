为了让您的同伴在 Docker 容器中成功连接您的远程仓库，并解决子模块（小箭头）问题，请让他们按照以下步骤操作。

这些操作假设同伴已经在 `/home` 目录下执行过 `git init`，且里面已经有一些本地文件。

### 第一步：清理本地子模块残留（解决小箭头问题）

由于同伴本地的文件夹里可能也带有 `.git` 文件夹（导致了小箭头），首先要在本地彻底清除这些干扰。

在同伴的 Docker 容器 `/home` 目录下执行：
```bash
# 1. 查找并删除所有子文件夹中的 .git 目录（排除根目录的 .git）
find . -mindepth 2 -name ".git" -type d -exec rm -rf {} +

# 2. 如果之前已经 git add 过，先清除 Git 索引缓存
git rm -r --cached .
```

---

### 第二步：连接远程仓库并配置身份信息

1.  **关联您的远程仓库：**
    ```bash
    # 如果之前没加过 origin
    git remote add origin https://github.com/shijiandeliushi/xiaomi_cup.git

    # 如果提示 origin 已存在，则修改它
    git remote set-url origin https://github.com/shijiandeliushi/xiaomi_cup.git
    ```

2.  **配置 Git 身份（必须）：**
    ```bash
    git config --global user.name "同伴的用户名"
    git config --global user.email "同伴的邮箱"
    ```

---

### 第三步：合并远程的 `master` 分支

因为同伴本地已经有内容且初始化过，直接 pull 会报错。需要强制合并两个不相关的历史：

1.  **将本地内容先提交一次（防止丢失）：**
    ```bash
    git add .
    git commit -m "Save local work before merging"
    ```

2.  **拉取并合并远程 master：**
    ```bash
    git pull origin master --allow-unrelated-histories
    ```
    *   **注意：** 此时可能会弹出编辑器要求写合并说明。如果是 `vim`，按 `i` 输入文字，按 `Esc` 然后输入 `:wq` 回车。
    *   **如果冲突：** 如果同伴的文件和你重名且内容不同，Git 会提示冲突，让他手动改完文件后 `git add .` 然后 `git commit`。

---

### 第四步：拉取并切换 `xiaomi_cup` 分支

现在 `master` 已经同步好了，接下来同步另一个分支：

1.  **获取远程所有分支信息：**
    ```bash
    git fetch origin
    ```

2.  **切换到 `xiaomi_cup` 分支：**
    ```bash
    git checkout xiaomi_cup
    ```
    这条命令会在本地创建一个和远程一模一样的 `xiaomi_cup` 分支，并自动切换过去。

---

### 第五步：如何实现稳定推送 (HTTPS 鉴权)

由于在 Docker 容器中，HTTPS 每次推送都会要密码。同伴需要执行以下操作来简化流程：

1.  **生成 Personal Access Token (PAT)：**
    让同伴去 GitHub 网页生成一个 Token（之前步骤提过，勾选 `repo` 权限）。

2.  **开启凭据存储：**
    在容器内执行：
    ```bash
    git config --global credential.helper store
    ```

3.  **进行一次推送/拉取：**
    ```bash
    git push -u origin master
    ```
    此时会提示输入：
    *   **Username:** 同伴的 GitHub 用户名
    *   **Password:** **粘贴刚才生成的 PAT**

    **一旦执行成功，账号密码就会保存在容器内的文本文件中，以后再 push 或 pull 就不再需要输入了。**

---

### 总结：同伴现在的操作流

以后同伴在开发时，只需要按照正常的 Git 流程即可：

*   **想更新代码时：** `git pull origin master` 或 `git pull origin xiaomi_cup`
*   **想提交代码时：**
    1.  `git add .`
    2.  `git commit -m "说明文字"`
    3.  `git push`

**特别提醒：**
如果在 GitHub 上看到的文件夹依然有小箭头，说明**你（项目拥有者）**还没有按照我上一次回复的方法，在**你的**电脑上删除子文件夹里的 `.git` 并重新 `push`。只有当你修复了远程仓库，同伴 `pull` 下来的才会是正常的文件夹。

---

## 补充笔记：`.gitignore` / `git add` / 大文件推送失败排查（本次实操总结）

以下是这次在 `/home` 仓库里的实操结论，后续可直接照抄。

### 1) 先确认 Git 根目录（非常关键）

```bash
cd /home
git rev-parse --show-toplevel
```

如果输出是 `/home`，说明真正仓库根是 `/home`。此时：
- `/home/cyberdog_sim/.gitignore` 依然有效；
- 但它只影响 `cyberdog_sim/` 这个子目录及其下级路径。

### 2) `.gitignore` 的核心规则

- `.gitignore` **只对未被跟踪（untracked）文件生效**；
- 对已被跟踪的文件（历史里已经提交过）**不会自动失效**；
- 想停止推送已跟踪文件，必须先取消跟踪。

### 3) 正确忽略 `build/install/log` 的做法

1. 在 `cyberdog_sim/.gitignore` 写规则（示例）：

```gitignore
/build/
/install/
/log/
**/build/
**/install/
**/log/
```

2. 取消已跟踪缓存（保留本地文件）：

```bash
cd /home
git rm -r --cached --ignore-unmatch cyberdog_sim/build cyberdog_sim/install cyberdog_sim/log
```

3. 一次性加入未忽略改动：

```bash
git add -A
```

4. 提交并推送：

```bash
git commit -m "chore: ignore build/install/log"
git push origin xiaomi_cup
```

### 4) `git add -A` 前是否要先单独提交 `.gitignore`

不需要。推荐顺序：
1. 先改 `.gitignore`
2. 直接 `git add -A`
3. `git status --short` 检查
4. 再 `git commit`

### 5) `git status --short` 常见标记速查

- `A`：新增
- `M`：修改
- `D`：删除
- `R`：重命名
- `??`：未跟踪
- `!!`：被忽略

两列格式 `XY path`：
- `X`=暂存区状态
- `Y`=工作区状态

示例：
- `M  file`：已暂存修改
- ` M file`：仅工作区修改，未暂存
- `?? file`：未跟踪

### 6) “没写 `.gitignore` 且没 `git add`，会不会 push 上去？”

正常不会。`git push` 只推送**已提交历史**；未 `add` 的 `??` 文件不会被提交、更不会被 push。

### 7) 大文件 push 失败（GH001 / 超 100MB）根因

若报错类似：
- `File ... exceeds GitHub's file size limit of 100MB`

通常是：大文件曾经进入了某个提交历史。即便后续删除了文件，只要该对象仍在待推送历史里，GitHub 仍会拒绝。

### 8) 不丢本地代码的安全修复流程（推荐）

先做备份分支，再重组提交：

```bash
cd /home
# 1) 建备份分支（防回滚失败）
git branch backup_before_clean_push_$(date +%Y%m%d_%H%M%S)

# 2) 基于远端分支软重置（保留当前工作区内容）
git reset --soft origin/xiaomi_cup

# 3) 重新提交为“干净历史”
git commit -m "sync local code without build artifacts"

# 4) 推送
git push origin xiaomi_cup
```

### 9) 误执行 `git reset --hard` 后如何恢复

用 `reflog` 找回：

```bash
cd /home
git reflog -n 20
# 找到 reset 前的提交 hash（例如 1f4ea37e）
git reset --hard <hash>
```

这是恢复“看起来丢失”的本地提交最有效的方法。

### 10) Docker 容器里推送失败：`terminal prompts disabled`

若出现：
- `could not read Username for 'https://github.com': terminal prompts disabled`

说明当前环境不能交互输入账号。需在可鉴权环境推送，或先配置凭据（PAT + credential helper）。