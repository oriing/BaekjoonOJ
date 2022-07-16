import sys
imput=sys.stdin.readline

a=input()
while a!='#':
    b=0
    for i in tuple(a):
        if i in ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'):
            b+=1
    print(b)
    a=input()
