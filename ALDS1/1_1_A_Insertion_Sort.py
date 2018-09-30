input(); A = list(map(int, input().split()))
print(*A)
for i in range(1, len(A)):
    value = A[i]
    j = i - 1
    while j >= 0 and A[j] > value:
        A[j+1] = A[j]
        j -= 1
    A[j+1] = value
    print(*A)