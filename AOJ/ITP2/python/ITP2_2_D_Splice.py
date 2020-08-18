from collections import deque
n, q = map(int, input().split())
L = [deque() for _ in range(n)]
for _ in range(q):
    query = list(map(int, input().split()))
    if query[0] == 0:
        L[query[1]].append(query[2])
    elif query[0] == 1:
        print(*L[query[1]])
    elif query[0] == 2:
        L[query[2]] += L[query[1]]
        L[query[1]] = deque()