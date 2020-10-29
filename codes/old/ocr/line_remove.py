import cv2
import numpy as  np
from PIL import Image

im = Image.open('abc.gif')
# transparency = im.info['transparency'] 
im.save('icon.png')

img = cv2.imread('/home/shivji/scripts/ocr/icon.png',0)

kernel = np.ones((3,2),np.uint8)
opening = cv2.morphologyEx(img, cv2.MORPH_CLOSE, kernel)
cv2.imwrite('icon.png',opening)
cv2.imshow('img',opening)
cv2.waitKey(0)
# print a4