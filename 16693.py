A1, P1 = map(int, input().split())
R1, P2 = map(int, input().split())
if P1/A1 < P2/(R1**2*3.14159265358979):
    print("Slice of pizza")
else:
    print("Whole pizza")