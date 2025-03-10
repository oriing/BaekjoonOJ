ans = 0
for _ in range(int(input())):
    if int(input().replace("D-", "")) <= 90: ans+=1
print(ans)
