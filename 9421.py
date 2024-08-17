x = {1}
N = int(input())
is_prime = [True]*(N+1)
is_prime[0], is_prime[1] = False, False

def getNext(k):
    th = 0
    while k>0:
        th += (k % 10)**2
        k //= 10
    return th

for i in range(2, N+1):
    if is_prime[i]:
        for j in range(2*i, N+1, i):
            is_prime[j] = False

for i in range(1, N+1):
    no = {i}
    k = i
    if not is_prime[i]: continue
    while True:
        #print(k, i)
        if k in x:
            x = x.union(no)
            print(i)
            break
        k = getNext(k)
        if k in no:
            break
        no.add(k)
