x=int(input())
y=[]
for i in range(x):
	z=int(input())
	y.append(z)
y.sort(reverse=False)
if x%2==0:
	b=y[(x+1)//2]
	c=y[(x-1)//2]
	print((b+c)/2)
	
else:
	print(y[x//2])
