x=list(map(int, input().split(" ")))
n=x[0]
m=x[1]
q=list(map(int, input().split(" ")))
flag=0
c=None
for x in range(n):
    if q[x]>m and flag==1:
        print(x-1)
        c=x-1
        break
    if q[x]>m:
        flag+=1
if flag==0 and c==None:
    print(n)
elif flag==1 and c==None:
    print(n-1)