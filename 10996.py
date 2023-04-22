n = int(input())

if n==1:
    print("*")
else:
    for i in range(n*2):
        for j in range(n):
            if (i%2+j)%2==0:
                print(end="*")
            else:
                print(end=' ')
        print()
