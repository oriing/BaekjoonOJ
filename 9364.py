for i in range(int(input())):
    x = input()
    s = input()
    s = s.replace('X', "*("+x+")").replace('+*', "+").replace('-*', "-").replace('^', "**")
    if s[0]=="*":
        s = s[1:]
    print(f"Case #{i+1}:", eval(s))