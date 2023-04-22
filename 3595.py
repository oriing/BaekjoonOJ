def beerRefrigerator(n):
    best = []
    mx   = -1
    for a in range(1, n+1):
        if n % a == 0:
            for b in range(1, n//a+1):
                if (n//a)%b == 0:
                    c = n//a//b
                    t = a*b + b*c + c*a
                    if mx > t or mx == -1:
                        mx   = t
                        best = [a, b, c]
    best.sort(reverse=True)
    return str(best[0])+" "+str(best[1])+" "+str(best[2])
print(beerRefrigerator(int(input())))
