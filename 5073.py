while True:
    x, y, z = map(int,input().split())
    if x==0 and y==0 and z==0:
        break
    if x+y<=z or y+z<=x or x+z<=y:
        print("Invalid")
        continue
    if x==y==z:
        print("Equilateral")
    elif x==y or y==z or z==x:
        print("Isosceles")
    else:
        print("Scalene")
