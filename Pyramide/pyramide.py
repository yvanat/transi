import pyautogui as auto
from python_imagesearch.imagesearch import imagesearch as search
import time

#msg = "PETTHEVOLTA"
msg = "catJAM"

pos = search("./msg.png")
if pos[0] == -1:
	exit("no chat found")
auto.moveTo(pos)
auto.mouseDown()
auto.mouseUp()
for i in range(0, 5):
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
	time.sleep(0.2)
exit()
