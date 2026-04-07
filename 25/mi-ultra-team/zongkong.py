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
    run('start1.py')   # 先跑你的流程
    run('/home/robot/code/loco_hl_example-master/basic_motion/s8.py')
    
    
