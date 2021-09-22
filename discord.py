# import time
# import pyautogui

# time.sleep(5)
# for i in range(100):
#     # pyautogui.leftClick()
#     pyautogui.hotkey('ctrl', 'v')
#     pyautogui.press('enter')
 
import pyautogui
import time

n=int(pyautogui.prompt("Enter the no of messages you want to delete"))
time.sleep(5)
for i in range(n):
    pyautogui.press("esc",interval=0,logScreenshot=None)
    pyautogui.press("esc",interval=0,logScreenshot=None)
    pyautogui.press("up",interval=0,logScreenshot=None)
    pyautogui.hotkey("ctrl", "a",interval=0,logScreenshot=None)

    pyautogui.press("delete",interval=0,logScreenshot=None)
    pyautogui.press("enter",interval=0,logScreenshot=None)
    pyautogui.press("enter",interval=0,logScreenshot=None)
    pyautogui.press("enter",interval=0,logScreenshot=None)