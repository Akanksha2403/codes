import pyautogui
import time

# pyautogui.PAUSE = False
time.sleep(5)
for i in range(10000):
    pyautogui.click()
    pyautogui.press("up", interval=0.1)
    pyautogui.hotkey("ctrl", "a")
    pyautogui.press("delete")
    pyautogui.press("enter")
    pyautogui.press("enter")
    pyautogui.press("enter")
