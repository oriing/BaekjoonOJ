
def ptrplus():
    global ptr, data
    ptr += 1
    if ptr > 32767:
        ptr = 0
def ptrminus():
    global ptr, data
    ptr -= 1
    if ptr < 0:
        ptr = 32767

def plus():
    global ptr, data
    data[ptr] += 1
    if data[ptr] > 255:
        data[ptr] = 0

def minus():
    global ptr, data
    data[ptr] -= 1
    if data[ptr] < 0:
        data[ptr] = 255

def prt():
    global ptr, data, result
    result += chr(data[ptr])


for loop in range(int(input())):
    ptr    = 0
    data   = [0]*32768
    prog   = 0
    result = ''

    print(f"PROGRAM #{loop+1}:")
    ps = ''
    while True:
        s = input()
        if s == "end": break
        ps += (s.split("%")[0])

    n     = len(ps)
    opens = []

    while n > prog:
        now = ps[prog]
        if ps[prog] == ">":
            ptrplus()
            prog+=1
            continue
        if ps[prog] == "<":
            ptrminus()
            prog+=1
            continue
        if ps[prog] == "+":
            plus()
            prog+=1
            continue
        if ps[prog] == "-":
            minus()
            prog+=1
            continue
        if ps[prog] == ".":
            prt()
            prog+=1
            continue

        if ps[prog] == '[':
            if data[ptr]:
                opens.append(prog)
            else:
                cpt = False
                while True:
                    prog += 1
                    if n <= prog:
                        cpt = True
                        break
                    if ps[prog] == "]":
                        break
                if cpt:
                    print("COMPILE ERROR", end='')
                    break
            prog+=1
            continue
        if ps[prog] == ']':
            if len(opens) == 0:
                print("COMPILE ERROR", end='')
                break
            if data[ptr]:
                prog = opens[-1]
            else:
                opens.pop()
            prog += 1
            continue
        prog += 1
    if len(opens) == 0:
        print(result, end='')
    else:
        print("COMPILE ERROR", end='')
    print()
