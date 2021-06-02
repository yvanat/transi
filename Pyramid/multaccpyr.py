import pyautogui as auto
from python_imagesearch.imagesearch import imagesearch as search
import time

# browser order : anon_fox fox edge anon_chrome anon_edge anon_operagx operagx

# while(1):
# 	time.sleep(3)
# 	print(auto.position())

pos = [(734, 402), (1017, 403), (1441, 420), (1730, 435), (802, 919), (1318, 927), (1638, 931)]

msg = "PETTHEVOLTA"
base = 7

if base == 5:
	for i in range(0, 5):
		auto.moveTo(pos[i], _pause=False)
		auto.mouseDown(_pause=False)
		auto.mouseUp(_pause=False)
		time.sleep(0.10)
		if i == 0 or i == 4:
			c = 1
		if i == 1 or i == 3:
			c = 2
		if i == 2:
			c = 3
		for j in range(0, c):
			for k in msg:
				auto.keyDown(k, _pause=False)
				auto.keyUp(k, _pause=False)
			auto.keyDown("space", _pause=False)
			auto.keyUp("space", _pause=False)
		auto.keyDown("enter", _pause=False)
		auto.keyUp("enter", _pause=False)
elif base == 7:
	for i in range(0, 7):
		auto.moveTo(pos[i], _pause=False)
		auto.mouseDown(_pause=False)
		auto.mouseUp(_pause=False)
		time.sleep(0.01)
		if i == 0 or i == 6:
			c = 1
		if i == 1 or i == 5:
			c = 2
		if i == 2 or i == 4:
			c = 3
		if i == 3:
			c = 4
		for j in range(0, c):
			for k in msg:
				auto.keyDown(k, _pause=False)
				auto.keyUp(k, _pause=False)
			auto.keyDown("space", _pause=False)
			auto.keyUp("space", _pause=False)
		time.sleep(0.03)
		auto.keyDown("enter", _pause=False)
		auto.keyUp("enter", _pause=False)

exit()
