"""
import numpy as np
n, m = map(int, input().split())
A = np.zeros((n, m))
b = np.zeros((m, 1))
for i in range(n):
    A[i,] = list(map(int, input().split()))

for j in range(m):
    b[j] = int(input())
c = np.dot(A, b)
print("\n".join(map(str, [line[0] for line in c])))
"""
n, m = map(int, input().split())
A, b = [], []
for i in range(n):
    A.append(list(map(int, input().split())))
for j in range(m):
    b.append(int(input()))

c = []
for i in range(n):
    sum = 0
    for j in range(m):
        sum += A[i][j] * b[j]
    c.append(sum)

print("\n".join(map(str, c)))