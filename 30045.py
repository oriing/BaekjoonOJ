a = 0
for _ in range(int(input())):
    s = input()
    if 'OI' in s or '01' in s:
        a +=1
print(a)
