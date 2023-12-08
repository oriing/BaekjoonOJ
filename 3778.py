import sys
input = sys.stdin.readline

for _ in range(int(input())):
    a = input().strip()
    b = input().strip()

    cha = [0]*30
    chb = [0]*30

    for i in a:
        cha[ord(i)-ord('a')]+=1
        
    for i in b:
        chb[ord(i)-ord('a')]+=1

    ans = 0

    for i in range(26):
        ans += abs(cha[i]-chb[i])

    print(f"Case #{_+1}: {ans}")
