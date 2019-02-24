r=range
a,b,c,x=map(int,[input()for _ in r(4)]);n=0
for i in r(a+1):
 for j in r(b+1):
  for k in r(c+1):
   if 500*i+100*j+50*k==x:n+=1
   elif 500*i+100*j+50*k>x:break
print(n)
