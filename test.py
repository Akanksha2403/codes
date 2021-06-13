import time
import pyautogui
a = 97

time.sleep(5)
for i in range(100):
    pyautogui.hotkey('ctrl', 'v')
    pyautogui.press('enter')