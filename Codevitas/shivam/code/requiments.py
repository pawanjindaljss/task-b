import os
try :
	import pip
except ImportError:
	print "Installing pip..\n"
	os.system('sudo apt-get install python-pip')

try :
	import numpy
except ImportError:
	print "installing numpy..\n"
	os.system('apt-cache policy python-numpy')
	os.system('sudo pip install numpy')
	os.system('apt-cache policy cython')
	os.system('sudo apt-get install cython')

os.system('sudo apt-get update')

try :
	import cython
except ImportError:
	print "installing cython..\n"
	os.system('apt-cache policy cython')
	os.system('sudo pip install -U cython')

try :
	import scipy
except ImportError :
	os.system('sudo apt-get install libblas-dev liblapack-dev')
	os.system('sudo apt-get install gfortran')
	os.system('sudo pip install scipy')

os.system('sudo apt-get update')
try :
	import sklearn
except ImportError :
	print "installing skLearn"
	os.system('sudo pip install -U scikit-learn')
os.system('sudo apt-get update')
try :
	import matplotlib
except ImportError:
	print "installing matplotlib and dependencies"
	os.system('sudo apt-get install libfreetype6-dev')
	os.system('sudo pip install matplotlib')
os.system('sudo apt-get update')
try :
	import skimage
except ImportError:
	print "installing skimage..\n"
	os.system('sudo pip install scikit-image')
os.system('sudo apt-get update')
try :
	import dlib
except ImportError:
	print "installing dlib"
	os.system('sudo apt-get install cmake')
	os.system('apt-cache search libboost-python')
	os.system('sudo apt-get install libboost-python-dev')
	os.system('sudo pip install dlib')
os.system('sudo apt-get update')
try :
	import cv2
except ImportError:
	os.system('sudo apt-get install libopencv-dev python-opencv')
	# os.system('sudo apt-get install libjpeg8-dev libtiff4-dev libjasper-dev libpng12-dev')
	# os.system('sudo apt-get install libgtk2.0-dev')
	# os.system('sudo apt-get install libavcodec-dev libavformat-dev libswscale-dev libv4l-dev')
	# os.system('sudo apt-get install libatlas-base-dev gfortran')

