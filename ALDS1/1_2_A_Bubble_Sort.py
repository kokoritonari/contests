input(); A = list(map(int, input().split()))
flag = True
counter = 0
sorted_idx = 0
while flag:
    flag = False
    for i in range(sorted_idx+1, len(A))[::-1]:
        if A[i-1] > A[i]:
            A[i], A[i-1] = A[i-1], A[i]
            flag = True
            counter += 1
    sorted_idx += 1
print(*A)
print(counter)