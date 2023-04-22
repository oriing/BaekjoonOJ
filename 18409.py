n=int(input())
s=input()
d=[x for x in s if x in ('a', 'e', 'i', 'o', 'u')]
print(len(d))