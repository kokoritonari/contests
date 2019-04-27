def magic(a,b):
 c=list(map(lambda x:abs(x-a), b))
 print(c)

n,a,b,c=map(int,input().split())
l=[]
for _ in range(n):
 l+=[int(input())]
print(l)
for e in [a,b,c]:
 magic(e,l)
