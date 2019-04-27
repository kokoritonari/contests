input();a=set(map(int,input().split()))
while(len(a)>1):
 m=min(a)
 a={e%m for e in a-{m}if e%m>0}|(a&{m})
print(*a)
