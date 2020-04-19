from collections import deque

def delete_nth(d, n):
    d.rotate(-n)
    d.popleft()
    d.rotate(n)

A = deque()
cursol = 0
for _ in range(int(input())):
    query = list(map(int, input().split()))
    if query[0] == 0:
        A.insert(cursol, query[1])
    elif query[0] == 1:
        cursol += query[1]
    elif query[0] == 2:
        # del A[cursol]
        # A = A[:cursol] + A[cursol+1:] slow
        delete_nth(A, cursol)

print(*A, sep="\n")