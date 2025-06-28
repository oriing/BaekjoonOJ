for i in range(115):
    print("+", end='')
print(".")

d = [-18, 19, -68, 3, -2, 6]

for i in d:
    if i < 0:
        for _ in range(-i): print("-", end='')
    else:
        for _ in range(i): print("+", end='')
    print(".")
