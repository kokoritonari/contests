input()
A = input().split()
q = int(input())
for _ in [0]*q:
    b, e, k = input().split()
    print(A[int(b):int(e)].count(k))