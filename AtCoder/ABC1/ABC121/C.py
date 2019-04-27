import sys;n,m=input().split();m=int(m);a=[];i=n=c=0
a=sorted(tuple(map(int,e.split()))for e in sys.stdin)
while m>0:c+=a[i][0]*a[i][1];m-=a[i][1];i+=1
print(c+m*a[~-i][0])
"""
n,m,*t=map(int,open(0).read().split());c=0
for a,b in sorted(zip(t[::2],t[1::2])):c+=a*min(m,b);m=max(0,m-b)
print(c)
"""
"""
n,m=map(int,input().split())
c=0;d={}
for _ in[0]*n:
 a,b=map(int,input().split())
 if not a in d.keys():
  d[a]=0
 d[a]+=b
for k in sorted(d.keys()):
 if d[k] < m:
  c+=k*d[k]
  m-=d[k]
 else:
  c+=k*m
  m=0
 if m == 0:break
print(c)
"""
