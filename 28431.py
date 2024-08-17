l = eval("input(),"*5)
s = set()
for i in l:
    if l.count(i)%2==1 and i not in s:
        print(i)
        s.add(i)
