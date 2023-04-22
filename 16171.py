a=input()
b=input()
aa=""
for i in a:
    if not '0'<=i<='9':
        aa+=i
if b in aa:
    print(1)
else:
    print(0)
