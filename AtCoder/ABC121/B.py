n,m,c=map(int,input().split());d=0
b=list(map(int,input().split()))
for _ in[0]*n:
 a=list(map(int,input().split()))
 d+=1*(sum(x*y for x,y in zip(a,b))+c>0)
print(d)
