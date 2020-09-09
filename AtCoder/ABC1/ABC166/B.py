n,k=map(int,input().split());s={*range(1,-~n)}
for _ in range(k):
 input();s-={*map(int,input().split())}
print(len(s))
# n,_,*t=''.join([*open(0)][::2]).split()
# print(int(n)-len({*t}))
