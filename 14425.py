n, m = map(int,input().split())
d = {input() for _ in range(n)}
print(sum([1 if input() in d else 0 for _ in range(m)]))
