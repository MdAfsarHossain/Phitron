import pyautogui
from time import sleep
# sleep(5)

# for i in range(0, 3):
#     pyautogui.write("I Love You.", interval=0.25)
#     pyautogui.press('enter')

n = int(input("Enter the number of rows: "))
sleep(5)

for i in range(1, n+1):
    for j in range(1, i+1):
        pyautogui.typewrite("#", interval=0.25)
    pyautogui.press('enter')


# pip install pyautogui

'''
#
##
###
#
##
###
####

'''
