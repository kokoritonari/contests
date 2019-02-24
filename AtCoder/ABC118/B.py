n,m=map(int,input().split())
a=set(map(int,input().split()[1:]))
for _ in range(n-1):
 a=a&set(map(int,input().split()[1:]))
print(len(a))
