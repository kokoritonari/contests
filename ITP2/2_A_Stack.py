from collections import deque
n, q = map(int, input().split())
S = [deque() for _ in range(n)]
for _ in range(q):
    query = list(map(int, input().split()))
    if query[0] == 0:
        S[query[1]].append(query[2])
    elif len(S[query[1]]) > 0:
        if query[0] == 1:
            print(S[query[1]][-1])
        elif query[0] == 2:
            S[query[1]].pop()