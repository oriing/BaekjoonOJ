import sys
input = sys.stdin.readline

for _ in range(int(input())):
    a, b, c=input().split()
    print("$%.2f"%(eval(a)*eval(b)*eval(c)))