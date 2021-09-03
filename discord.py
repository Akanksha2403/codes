import time
import pyautogui

time.sleep(5)
for i in range(100):
    # pyautogui.leftClick()
    pyautogui.hotkey('ctrl', 'v')
    pyautogui.press('enter')
 