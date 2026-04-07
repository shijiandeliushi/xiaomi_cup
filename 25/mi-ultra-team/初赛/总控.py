# run_all.py
import subprocess, sys, os

ROOT = os.path.abspath(os.path.dirname(__file__))

def run(script):
    """阻塞直到脚本退出"""
    print(f'>>> running {script}')
    code = subprocess.call([sys.executable, os.path.join(ROOT, script)])
    if code != 0:
        raise RuntimeError(f'{script} exited with code {code}')

if __name__ == '__main__':
    run('第一个回路.py')   
    try:
        subprocess.run([sys.executable, 's弯.py'], timeout=280)
    except subprocess.TimeoutExpired:
        print("s弯.py运行已超过5分钟，被强制终止")
    run('第二个回路.py')      
    try:
        subprocess.run([sys.executable, 's弯.py'], timeout=300)
    except subprocess.TimeoutExpired:
        print("s弯.py运行已超过5分钟，被强制终止")
    run('第三个回路.py')