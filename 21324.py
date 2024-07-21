import sys
input = sys.stdin.readline

def getVal(x):
    return "0123456789abcdef"[int(x / (360 / 16))]

N = int(input())
res = ""
for _ in range(N//2):
    k = getVal(float(input())) + getVal(float(input()))
    res += chr(int(k, base=16))

print(res)
