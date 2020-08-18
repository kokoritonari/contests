r=range
while 1:
 n,x=map(int,input().split())
 if n==0:break
 print(sum(a+b+c==x for a in r(1,n-1)for b in r(a+1,n)for c in r(b+1,n+1)))
"""
while True:
    n, x = map(int, input().split())

    if n == 0 and x == 0:
        break

    combi = 0
    for i in range(1, n-1):
        for j in range(i+1, n):
            for k in range(j+1, n+1):
                if i + j + k == x:
                    combi += 1

    print(combi)
"""
