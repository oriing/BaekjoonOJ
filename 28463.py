T = ['.OP.','P..O','.PO.','O..P']
F = ['I..P','.IP.','P..I','.PI.']
Lz = ['O..P','.OP.','P..O','.PO.']

x = "SWNE".index(input())
di = {T[x]:'T', F[x]:'F', Lz[x]:'Lz'}
now = input()+input()
if now in di:
    print(di[now])
else:
    print('?')
