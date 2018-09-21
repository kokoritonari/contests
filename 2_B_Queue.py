from collections import deque
n, q = map(int, input().split())
Q = [deque() for _ in range(n)]
for _ in range(q):
    query = list(map(int, input().split()))
    if query[0] == 0:
        Q[query[1]].append(query[2])
    elif len(Q[query[1]]) > 0:
        if query[0] == 1:
            print(Q[query[1]][0])
        elif query[0] == 2:
            Q[query[1]].popleft()