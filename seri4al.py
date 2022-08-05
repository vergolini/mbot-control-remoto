import serial
import time
import pyautogui

arduino = serial.Serial(port='COM5', baudrate=115200, timeout=.1)


while 1:
    incoming_data = str(arduino.readline())
    if 'D' in incoming_data:
        pyautogui.press('f13')
    if 'w' in incoming_data:
        pyautogui.press('volumeup')
    if 'E' in incoming_data:
        pyautogui.press('f15')
    if '-' in incoming_data:
        pyautogui.press('prevtrack')
    if 'o' in incoming_data:
        pyautogui.press('playpause')
    if 'd' in incoming_data:
        pyautogui.press('nexttrack')
    if '0' in incoming_data:
        pyautogui.press('f19')
    if 's' in incoming_data:
        pyautogui.press('volumedown')
    if 'F' in incoming_data:
        pyautogui.press('f21')
    if '1' in incoming_data:
        pyautogui.press('f22')
    if '2' in incoming_data:
        pyautogui.press('f23')
    if '3' in incoming_data:
        pyautogui.press('f24')
    if '4' in incoming_data:
        pyautogui.press('f16')
    if '5' in incoming_data:
        pyautogui.press('f14')
    if '6' in incoming_data:
        pyautogui.press('f17')
    if '7' in incoming_data:
        pyautogui.press('f22')
    if '8' in incoming_data:
        pyautogui.press('f23')
    if '9' in incoming_data:
        pyautogui.press('f17')
    if 'A' in incoming_data:
        pyautogui.hotkey('f17', 'f14')
    if 'B' in incoming_data:
        pyautogui.hotkey('f17', 'f14', 'f19')
    if 'C' in incoming_data:
        pyautogui.press('f18')
    if 'D' in incoming_data:
        pyautogui.press('f18')
    if 'E' in incoming_data:
        pyautogui.press('f18')
    incoming_data = ""











