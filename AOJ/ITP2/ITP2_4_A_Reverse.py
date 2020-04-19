input()
A = input().split()
for _ in [0]*int(input()):
    b, e = map(int, input().split())
    A = A[:b] + A[b:e][::-1] + A[e:]
print(*A)