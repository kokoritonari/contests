I=lambda:map(int,input().split());n,m,c=I();*b,=I()
print(sum(sum(a*b for a,b in zip(I(),b))+c>0for _ in[0]*n))
"""
n,m,c=map(int,input().split());d=0
b=list(map(int,input().split()))
for _ in[0]*n:
 a=list(map(int,input().split()))
 d+=1*(sum(x*y for x,y in zip(a,b))+c>0)
print(d)
"""
