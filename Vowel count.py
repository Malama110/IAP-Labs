a=input()
count=0
while a !="end":
    for i in a:
        if i in "AaEeIiOoUu":
            count+=1
    print(count)
    count=0
    a=input()