a, b, c, d, e = eval(input().replace(' ', ','))
print(min((a-1)//b*c+c, (a-1)//d*e+e))
