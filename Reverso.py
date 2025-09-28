x=input()
y=list()
t=[]
counter=0
while x!="###":
	y.append(x)
	x=input()

t+=y[::-1]
for i in t:
	print(i)
	
