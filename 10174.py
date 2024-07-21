def pel(s):
    for i in range(len(s)):
        if s[i] != s[-i-1]:
            return "No"
    return "Yes"

for _ in range(int(input())):
    print(pel(input().lower()))
