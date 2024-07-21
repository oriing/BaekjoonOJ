input()
A, B = set(input().split()), set(input().split())
print(len((A-B).union(B-A)))
