for _ in range(int(input())):
    s = input()
    if len(s)!=7:
        print(0)
        continue
    A, B = s[0], s[2]
    if A==B:
        print(0)
        continue
    if A+A+B+B+A+B+B != s:
        print(0)
        continue
    print(1)
