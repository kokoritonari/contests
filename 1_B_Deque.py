"""
A = []
for _ in range(int(input())):
    query = list(map(int, input().split()))
    if query[0] == 0:
        if query[1] == 0:
            A.insert(0, query[2])
        elif query[1] == 1:
            A.append(query[2])
    elif query[0] == 1:
        print(A[query[1]])
    elif query[0] == 2:
        if query[1] == 0:
            A.pop(0)
        elif query[1] == 1:
            A.pop()
"""
"""
from collections import deque
A = deque()
for _ in range(int(input())):
    query = list(map(int, input().split()))
    if query[0] == 0:
        if query[1] == 0:
            A.appendleft(query[2])
        elif query[1] == 1:
            A.append(query[2])
    elif query[0] == 1:
        print(A[query[1]])
    elif query[0] == 2:
        if query[1] == 0:
            A.popleft()
        elif query[1] == 1:
            A.pop()
"""
from collections import deque
queries = [input().split() for _ in range(int(input()))]
A = deque()
for query in queries:
    if query[0] == "0":
        if query[1] == "0":
            A.appendleft(int(query[2]))
        elif query[1] == "1":
            A.append(int(query[2]))
    elif query[0] == "1":
        print(A[int(query[1])])
    elif query[0] == "2":
        if query[1] == "0":
            A.popleft()
        elif query[1] == "1":
            A.pop()