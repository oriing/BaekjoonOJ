a, b, c = eval(input().replace(' ',','))
if b-c >= 0:
    print(-1)
else:
    print(a//(c-b)+1)
