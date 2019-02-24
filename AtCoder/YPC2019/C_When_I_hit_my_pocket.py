k,a,b=map(int,input().split())
c=[]
for m in range(k//2):
 if 1+k-(2+a)*m<0:break
 c+=[1+k+(b-a-2)*m]
print(c)
