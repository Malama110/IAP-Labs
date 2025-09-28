import math
def rip(x,y):
    top=x*y+(math.sin(x)*math.cos(x)*math.tan(x))+(x+65314)/(96*y)
    bottom=(x**2)*(y**(-3))+math.log(y+12)
    return top/bottom
x=float(input())    
t1=rip((x+1),(x-1))
t2=rip((0.5*x),(0.7*x))
t3=rip(x,t2)
print(rip(t3,t1))