n=int(input())
a=0
b=1
if (n==1): printf("1")
elif (n==0): printf("0")
else:
    for i in range(n-1):
        t=a+b
        a=b
        b=t
    print(b)
