a,b,c=map(int,input().split());print(sum(c%i==0for i in range(a,b+1)))
"""
a,b,c=map(int,input().split());n=0
for i in range(a,b+1):
    if c%i==0:n+=1
print(n)
"""
"""
a, b, c = list(map(int, input().split()))
divisors = 0
for i in range(a, b+1):
    if c % i == 0:
        divisors += 1

print(divisors)
"""
