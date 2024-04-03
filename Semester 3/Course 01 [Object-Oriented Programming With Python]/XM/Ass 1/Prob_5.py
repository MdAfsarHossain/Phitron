# n = int(input())
#
# for i in range(1, n+1):
#     for j in range(1, i+1):
#         print("#", end="")
#     print()


import pyautogui
from time import sleep

n = int(input())
sleep(5)

for i in range(1, n+1):
    for j in range(1, i+1):
        pyautogui.typewrite("#", interval=0.25)
    pyautogui.press('enter')

'''

'''


