import math
a=float(input())
b=float(input())
c=float(input())
d=float(input())
mean=(a+b+c+d)/4
var=((mean-a)**2+(mean-b)**2+(mean-c)**2+(mean-d)**2)/4
std=math.sqrt(var)
print(mean)
print(var)
print(std)
