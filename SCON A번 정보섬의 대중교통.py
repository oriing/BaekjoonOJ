n, a, b = map(int,input().split())
if n>b:
    print("Bus")
else:
    if a==b:
        print("Anything")
    elif a<b:
        print("Bus")
    else:
        print("Subway")
