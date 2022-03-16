import serial
import time
import keyboard
import pyautogui

ser = serial.Serial("COM4", 9600)
ser.write(b'1')
time.sleep(1)
ser.write(b'2')
print(ser)
time.sleep(1)
print('we are in status')
while ser:
    data = ser.readline().decode()
    data = data.strip()
    time.sleep(0.2)
    print(data)
    if data == "LEFT":
        pyautogui.press('w')
        print('page up')
    elif data == "RIGHT":
        pyautogui.press('s')
        print('page down')
