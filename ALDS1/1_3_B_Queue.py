import sys,collections
p=[s.split()for s in sys.stdin]
p=collections.deque([[s[0],int(s[1])]for s in p])
q=int(p.popleft()[1])
t=0
while len(p)>0:
 if p[0][1]>q:
  p[0][1]-=q
  p+=[p.popleft()]
  t+=q
 else:
  t+=p[0][1]
  print(p.popleft()[0],t)
