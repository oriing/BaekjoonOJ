s='a'
try:
    while s!='':
        s=input()
        if s=='':
            continue
        a, b, c, d, e = map(int,s.split())
        print(a*6+b*3+c*2+1*d+e*2)
except:
    pass
