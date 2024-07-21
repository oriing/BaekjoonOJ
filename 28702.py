x = input(), input(), input()
t = 4
for i in x:
    t-=1
    try:
        k = int(i)
        break
    except:
        pass
else:
    raise ValueError
k += t

if not (k%3 or k%5):
    print('FizzBuzz')
elif not k%3:
    print("Fizz")
elif not k%5:
    print("Buzz")
else:
    print(k)
