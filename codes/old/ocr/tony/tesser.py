from PIL import Image, ImageEnhance, ImageFilter
import commands
import sys
import pytesseract
import cv2
import numpy as np
# img = sys.argv[1]

# usrimg = cv2.imread(img,0)

# kernel = np.ones((1,1),np.uint8)
# opening = cv2.morphologyEx(usrimg, cv2.MORPH_CLOSE, kernel)
# cv2.imwrite('icon.png',opening)

usrimg = Image.open('Workload3070.jpg')
# usrimg = usrimg.filter(ImageFilter.MedianFilter())
enhaccer = ImageEnhance.Contrast(usrimg)
usrimg = enhaccer.enhance(15)
# usrimg = usrimg.convert('1')
usrimg.save('3070_copy.jpg')
data =  pytesseract.image_to_string(Image.open('3070_copy.jpg'))
print data
# # # Invoking tesseract from python to extract characters
# # commands.getoutput('tesseract temp.bmp '+img[:-4])
# # # Reading the output generated in data.txt


