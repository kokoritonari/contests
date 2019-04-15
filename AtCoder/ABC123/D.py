r=range;x,y,z,k=map(int,input().split())
a,b,c=eval("sorted(list(map(int,input().split())),reverse=True),"*3)
abc=[]
for l in r(x):
 for m in r(y):
  if -~l*-~m>k:break
  for n in r(z):
   if -~l*-~m*-~n>k:break
   abc+=[a[l]+b[m]+c[n]]
print(*sorted(abc,reverse=True)[:k])
"""
r=range;x,y,z,k=map(int,input().split())
a,b,c=eval("list(map(int,input().split())), "*3)
ab=sorted([a[i]+b[j]for i in r(x)for j in r(y)],reverse=True)
abc=sorted([ab[i]+c[j]for i in r(min(3000,x*y))for j in r(z)],reverse=True)
print(*abc[:k])
"""
