*a,=map(int,open(0));b=[(i+9)//10*10for i in a];s=sum(b)
print(min(s-b[i]+a[i]for i in range(5)))
