input()
A = list(map(int, input().split()))
for _ in [0]*int(input()):
    b, m, e = map(int, input().split())
    for i in [0]*len(A):
        if A[i] < e-b:
            k = A[i]
            tmp = A[b+k]
            A[b+k] = A[b+((k+(e-m))%(e-b))]
            A[b+((k+(e-m))%(e-b))] = tmp
print(*A)