input(); A = list(map(int, input().split()))
counter = 0
for i in range(len(A)):
    min_idx = i
    for j in range(i, len(A)):
        if A[j] < A[min_idx]:
            min_idx = j
    if i != min_idx:
        A[i], A[min_idx] = A[min_idx], A[i]
        counter += 1
print(*A)
print(counter)