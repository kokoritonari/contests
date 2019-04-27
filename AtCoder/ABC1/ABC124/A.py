a,b=map(int,input().split())
if a>b:
 if ~-a>b:s=a+~-a
 else:s=a+b
else:
 if ~-b>a:s=b+~-b
 else:s=a+b
print(s)
