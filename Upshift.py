x=input()
a=[]
ts = ""
for i in range(len(x)):
    y=ord(x[i])+1
    t=chr(y)
    a.append(t)

for i in a:
    ts +=i
print(ts)

    
