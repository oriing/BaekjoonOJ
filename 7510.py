for i in range(int(input())):
    x, y, z = map(int,input().split())
    print(f"Scenario #{i+1}:")
    x, y, z = sorted((x**2, y**2, z**2))
    if x+y==z:
        print("yes\n")
    else:
        print("no\n")
