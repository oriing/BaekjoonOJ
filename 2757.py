def get(x):
    answer = ''
    while x:
        answer += str(chr(ord('A')+x % 26))
        x //= 26
    if answer=='': answer - 'A'
    return answer

while True:
    s = input()
    if s == "R0C0": break
    b, a = s.replace("R", "").split("C")
    print(get(int(a)-1), b, sep='')
    
