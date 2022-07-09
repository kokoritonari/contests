import math as m
a,b,d= map(int, input().split())
r=m.pi*d/180
print(a*m.cos(r)-b*m.sin(r),a*m.sin(r)+b*m.cos(r))
