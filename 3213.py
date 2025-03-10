a, b, c = 0, 0, 0
for _ in range(int(input())):
    s = input()
    if s == '1/4': a += 1
    elif s == '1/2': b += 1
    elif s == '3/4': c += 1
ans = c
a = max(a-c, 0)
ans += max((b-1)//2+1, 0)
a = max(a-b%2*2, 0)
ans += max((a-1)//4+1, 0)
print(ans)
