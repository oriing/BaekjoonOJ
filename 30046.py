input()
a = input()
b = input()
c = input()

def change(x, h, j, s):
    x = x.replace('H', str(h))
    x = x.replace('J', str(j))
    x = x.replace('S', str(s))
    return x

tr = False

for h in range(1, 4):
    for j in range(1, 4):
        if h == j: continue
        for s in range(1, 4):
            if h == s or s == j: continue
            x = change(a, h, j, s)
            y = change(b, h, j, s)
            z = change(c, h, j, s)
            if x < y < z:
                print("HJS! HJS! HJS!")
                tr = True
                break

        if tr: break
    if tr: break
if not tr:
    print("Hmm...")
