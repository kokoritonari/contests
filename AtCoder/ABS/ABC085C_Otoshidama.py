r=range
n,y=map(int,input().split())
for i in r(n+1):
 for j in r(n+1-i):
  if i*10000+j*5000+(n-i-j)*1000==y:print(i,j,n-i-j);exit()
print(-1,-1,-1)
"""
r=range
n,y=map(int,input().split())
for i in r(n+1):
 for j in r(n+1-i):
  if i*10000+j*5000+(n-i-j)*1000==y:print(i,j,(n-i-j));break
 else:continue
 break
else:print(-1,-1,-1)
"""
"""
r=range
n,y=map(int,input().split())
for i in r(n+1):
 for j in r(n+1-i):
  for k in r(n+1-i-j):
   if k*10000+j*5000+i*1000==y:print(k,j,i);break
  else:continue
  break
 else:continue
 break
else:print(-1,-1,-1)
"""
