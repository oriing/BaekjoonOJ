def f(n):
    if n:
        print("PREMIADO" if n%42==0 else "TENTE NOVAMENTE")
    return n
while f(int(input())): pass
