d={'M':0, 'O':1, 'B':2, 'I':3, 'S':4}
chk=[0]*5
for s in input():
    if s in d:
        chk[d[s]] = 1
if all(chk):
    print("YES")
else:
    print("NO")
        
