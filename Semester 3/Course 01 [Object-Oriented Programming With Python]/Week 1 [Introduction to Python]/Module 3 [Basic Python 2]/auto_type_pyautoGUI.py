import pyautogui
from time import sleep

sleep(5)
for _ in range(0, 3):
    pyautogui.write('I Love You PYTHON.', interval=0.25)
    pyautogui.press('enter')

"""
I Love You PYTHON.
I Love You PYTHON.
I Love You PYTHON.

"""
# pip install pyautogui
