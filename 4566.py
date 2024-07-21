while True:
    x = input()
    if x == "END": break
    

    x = x.split('"')
    if len(x) != 3:
        print("not a quine")
        continue
        
    a = x[1]
    b = x[2]

    if a == '' or b == '':
        print("not a quine")
        continue
    
    if b[0] != ' ':
        print("not a quine")
        continue
    
    
    b = b[1:]
    if a == b:
        print(f"Quine({a})")
    else:
        print("not a quine")
