"""
A = []
for _ in range(int(input())):
    query = list(map(int, input().split()))
    if query[0] == 0:
        A.append(query[1])
    elif query[0] == 1:
        print(A[query[1]])
    elif query[0] == 2:
        A.pop()
"""
"""
A = []
for _ in range(int(input())):
    query = input().split()
    if query[0] == "0":
        A.append(int(query[1]))
    elif query[0] == "1":
        print(A[int(query[1])])
    elif query[0] == "2":
        A.pop()
"""
A = []
queries = [input().split() for _ in range(int(input()))]
for query in queries:
    if query[0] == "0":
        A.append(int(query[1]))
    elif query[0] == "1":
        print(A[int(query[1])])
    elif query[0] == "2":
        A.pop()