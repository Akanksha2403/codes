
import time
import pyautogui

# # # time.sleep(5)
# # # for i in range(1000):
# # #     # pyautogui.leftClick()
# # #     pyautogui.hotkey('ctrl', 'v')
# # #     pyautogui.press('enter')

# # import pyautogui
# # # pyautogui.failSafeCheck = False
# # pyautogui.sleep(5)
# # for i in range(1000):
# #     pyautogui.leftClick()

# import pyautogui
# pyautogui.displayMousePosition()

a = input()
time.sleep(10)
pyautogui.PAUSE = 0.5
for i in range(1000):
    # pyautogui.leftClick()
    pyautogui.hotkey('ctrl', 'c')
    pyautogui.hotkey('alt', 'tab')
    pyautogui.hotkey('ctrl', 'v')
    pyautogui.press('enter')
    pyautogui.hotkey('alt', 'tab')
    pyautogui.press('down')