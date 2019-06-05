n=int(input());a=list(map(int,input().split()));c=0
for i in range(n):
 for j in range(i+1,n)[::-1]:
  if a[j]<a[j-1]:
   a[j],a[j-1]=a[j-1],a[j];c+=1
print(*a)
print(c)
"""
n=int(input());a=list(map(int,input().split()))
i=c=0
while i<n:
 for j in range(i+1,n)[::-1]:
  if a[j]<a[j-1]:
   a[j],a[j-1]=a[j-1],a[j];c+=1
 i+=1
print(*a)
print(c)
"""
"""
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
"""
