import csv
'''num=int(input())
if num>100 :
	count=1
else :
	count=0
print(count)'''
with open("temp.txt","r") as temp:
	allfile=csv.reader(temp)
	for crr in allfile:
		print(",".join(crr))