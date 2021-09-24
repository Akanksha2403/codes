
# # # import time
# # # import pyautogui

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

freq = dict()
inp = input()
for i in inp:
    if i not in freq:
        freq[i] = 1
    else:
        freq[i] += 1
