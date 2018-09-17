a, b, c = list(map(int, input().split()))
divisors = 0
for i in range(a, b+1):
    if c % i == 0:
        divisors += 1

print(divisors)