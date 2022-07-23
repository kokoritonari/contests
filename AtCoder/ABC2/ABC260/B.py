I=input
n,x,y,z=map(int,I().split())
A=[*map(int,I().split())]
B=[*map(int,I().split())]
E,P=set(range(n)),set()
for c,L in(x,A),(y,B),(z,[a+b for a,b in zip(A,B)]):
 for p in sorted(E,key=L.__getitem__,reverse=1)[:c]:E-={p};P.add(-~p)
print(*sorted(P),sep='\n')
