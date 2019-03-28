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
