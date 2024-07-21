import datetime as dt
day, n = input().split()
y, m, d = map(int,day.split('-'))
n = int(n)-1
day = dt.datetime(y, m, d) + dt.timedelta(days=n)
print(day.strftime("%Y-%m-%d"))
