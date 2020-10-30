import turtle
import pygame
import time
import os
import tkinter
res=5
for x in range(res):
	turtle.forword(100)
	turtle.right(360/res)
	for y in range(res):
		turtle.forword(50)
		turtle.right(360/res)
