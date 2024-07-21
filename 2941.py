dictionary = ('c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=')
s = input()
for i in dictionary:
    s = s.replace(i, '0')

print(len(s))
