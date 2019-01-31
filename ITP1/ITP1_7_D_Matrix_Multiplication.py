n,m,l=map(int,input().split())
A=[input().split()for _ in[0]*n]
B=[input().split()for _ in[0]*m]
for a in A:print(*[sum(int(x)*int(y)for x,y in zip(a,b))for b in zip(*B)])
"""
n, m, l = map(int, input().split())
A, B, C = [], [], []

for i in range(n):
    A.append(list(map(int, input().split())))
for i in range(m):
    B.append(list(map(int, input().split())))

for i in range(n):
    row = []
    for j in range(l):
        sigma = 0
        for k in range(m):
            sigma += A[i][k] * B[k][j]
        row.append(sigma)
    C.append(row)

for row in C:
    print(*row)
"""
