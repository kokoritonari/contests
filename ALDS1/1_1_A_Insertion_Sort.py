input();a=list(map(int,input().split()));print(*a)
for i in range(1,len(a)):
 v=a[i];j=i-1
 while j>=0 and a[j]>v:
  a[j+1]=a[j];j-=1
 a[j+1]=v;print(*a)
"""
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
"""
