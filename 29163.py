n=int(input())
d = sum(map(lambda x: (1 if int(x)%2 else -1), input().split()))
print("Happy" if d<0 else "Sad")
