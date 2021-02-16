def t(a, b):
 l=len(a)//2
 return min(a[0],a[1]) if b&l==1 else min(t(a[0:l],0),t(a[l:],0)) if b else max(a[0],a[1]) if l==1 else max(t(a[0:l],0),t(a[l:],0))
print(t([(e, i)for i,e in enumerate(map(int,open(0).read().split()[1:]),1)],1)[1])
