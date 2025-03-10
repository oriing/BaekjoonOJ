x = list(map(int,eval("input(),"*3)))
a = (x[0]*3+x[1]*2+x[2]*1)
x = list(map(int,eval("input(),"*3)))
b = (x[0]*3+x[1]*2+x[2]*1)

if a==b:
    print("T")
elif a>b:
    print("A")
else:
    print("B")
