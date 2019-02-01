n=int(input());a=list(map(int,input().split()));c=0
for i in range(n):
 m=i
 for j in range(i,n):
  if a[j]<a[m]:m=j
 if m!=i:a[i],a[m]=a[m],a[i];c+=1
print(*a)
print(c)
# c+=i!=m
"""
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
"""
