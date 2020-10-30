import turtle
res=5
for x in range(res):
	turtle.forword(100)
	turtle.right(360/res)
	for y in range(res):
		turtle.forword(50)
		turtle.right(360/res)