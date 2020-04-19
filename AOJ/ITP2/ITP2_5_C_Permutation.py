from itertools import permutations
input(); A = tuple(map(int, input().split()))
p = sorted(list(permutations(A)))
index = p.index(A)
if index > 0: print(*p[index-1])
print(*A)
if index < len(p)-1: print(*p[index+1])