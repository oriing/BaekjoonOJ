n = int(input())

for i in range(1, n+1):
    print(" "*(n-i), end='')
    print("*", end='')
    if i==1:
        print()
        continue
    print(" "*((i)*2-3), end='')
    print("*")
