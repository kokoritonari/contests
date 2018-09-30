def BubbleSort(C):
    for i in range(1, len(C)):
        for j in range(i, len(C))[::-1]:
            if C[j-1][1] > C[j][1]:
                C[j], C[j-1] = C[j-1], C[j]
    return C

def SelectionSort(C):
    for i in range(len(C)):
        min_idx = i
        for j in range(i, len(C)):
            if C[j][1] < C[min_idx][1]:
                min_idx = j
        C[i], C[min_idx] = C[min_idx], C[i]
    return C

def isStable(origin, sort):
    for i in range(10):
        if [s for s, n in origin if n == i] != [s for s, n in sort if n == i]:
            # print([[s, n] for s, n in origin if n == i], [[s, n] for s, n in sort if n == i])
            return False
    return True

input(); C = [[c[0], int(c[1])] for c in input().split()]
C1 = BubbleSort(C.copy())
C2 = SelectionSort(C.copy())
print(*[s+str(n) for s, n in C1])
print("Stable" if isStable(C, C1) else "Not stable")
print(*[s+str(n) for s, n in C2])
print("Stable" if isStable(C, C2) else "Not stable")


"""
def isStable(origin, sort):
    n = len(origin)
    for i in range(n):
        for j in range(i+1, n):
            for a in range(n):
                for b in range(a+1, n):
                    if origin[i][1] == sort[i][1] and origin[i] == sort[b] and origin[j] == sort[a]:
                        return False
    return True
"""