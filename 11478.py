s = set()
x = input()
for i in range(len(x)):
    for j in range(i+1, len(x)+1):
        s.add(x[i:j])
print(len(s))
