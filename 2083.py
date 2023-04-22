l=[]
while True:
    im=input().split()
    l.append((im[0], int(im[1]), int(im[2])))
    if l[-1][0]=='#' and l[-1][1]==0 and l[-1][2]==0:
        break
    print(l[-1][0], end=' ')
    if l[-1][1]>17 or l[-1][2]>=80:
        print("Senior")
    else:
        print("Junior")
