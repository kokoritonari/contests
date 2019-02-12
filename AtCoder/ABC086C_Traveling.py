for _ in [0]*int(input()):
 t,x,y=map(int,input().split())
 if t<x+y or(t+x+y)%2:print("No");exit()
print("Yes")
"""
pt=px=py=f=0
for _ in range(int(input())):
 t,x,y=map(int,input().split())
 dt,dx,dy=t-pt,x-px,y-py
 if dt<dx+dy or dt%2!=(dx+dy)%2:f=1;break
 pt,px,py=t,x,y
print(["Yes","No"][f])
"""
