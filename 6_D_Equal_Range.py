import bisect
input(); A = list(map(int, input().split()))
for _ in [0]*int(input()):
    k = int(input())
    print(bisect.bisect_left(A, k), bisect.bisect_right(A, k))
"""
    l = bisect.bisect_left(A, k)
    r = bisect.bisect_right(A, k, lo=l)
    print(l, r)
"""