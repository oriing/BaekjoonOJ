import sys
input = lambda: sys.stdin.readline().rstrip()

def find():
    ret = "Standing"
    n = int(input())
    chk = True
    for _ in range(n):
        s = input()
        # if s == '000' and chk: continue
        # if chk and '1' in s: chk = True
        if s == '100' or s == '001' or s == '000':
            ret = "Fallen"
    return ret

for i in range(int(input())):
    print(f"Case {i+1}: {find()}")
