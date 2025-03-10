x, y = list(map(int,input().split())), list(map(int,input().split()))
d = [3, 20, 120]
x = sum([x[i]*d[i] for i in range(3)])
y = sum([y[i]*d[i] for i in range(3)])
if x>y: print("Max")
elif x<y: print("Mel")
else: print("Draw")
