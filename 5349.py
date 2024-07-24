s = set()
ans = []
while True:
    k = input()
    if k == '000-00-0000':
        break
    if k in s and k not in ans:
        ans.append(k)
    else:
        s.add(k)
print('\n'.join(sorted(ans)))
