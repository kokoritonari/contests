n, m, q = map(int, input().split())
s =  [[] for i in range(n)]
t = [n] * m
for i in range(q):
    a = list(map(lambda x: int(x) - 1, input().split()))
    if len(a) == 3:
        _, n, m = a
        t[m] -= 1
        s[n] += [m]
    else:
        _, n = a
        print(sum(map(lambda x: t[x] ,s[n])))