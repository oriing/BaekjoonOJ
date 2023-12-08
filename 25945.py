n = int(input())
l = tuple(map(int,input().split()))
s = sum(l)
avg = s // n
rem = s % n

cnt_less = 0
cnt_rems = 0
cnt_over = 0

for i in l:
    if i < avg:
        cnt_less += avg - i
    elif i > avg:
        cnt_rems += 1
        cnt_over += i - avg -1

if rem <= cnt_rems:
    print(cnt_less)
else:
    print(cnt_over)
