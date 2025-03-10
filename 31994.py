data = ''
datax = 0
for _ in range(7):
    a, b = input().split()
    if datax < int(b):
        datax = int(b)
        data  = a
print(data)
