s = input()

inner = True
ans   = ''
now   = ''

for x in s:
    if x == '<' or x == '>':
        if inner: now = now[::-1]
        inner = not inner
        ans += now
        ans += x
        now = ''
    elif x == ' ':
        if inner: now = now[::-1]
        ans += now
        ans += x
        now = ''
    else:
        now += x
if inner: now = now[::-1]
ans += now
print(ans)
