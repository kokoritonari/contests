n,x,y=map(int,input().split())
R=lambda n,r:[1,0][r]if n==1 else R(n-1,1)+x*R(n,0)if r else R(n-1,1)+y*R(n-1,0)
print(R(n,1))
