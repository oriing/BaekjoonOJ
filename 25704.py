n=int(input())
k=int(input())
print(max(0,k-max([0,500,k//10,2000,k//4][:n//5+1])))
