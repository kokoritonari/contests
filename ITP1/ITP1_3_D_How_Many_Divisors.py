nlist = [int(n) for n in input().rstrip().rsplit()]
divisor_n = 0
for i in range(nlist[0], nlist[1]+1):
    if nlist[2] % i == 0:
        divisor_n += 1

print(divisor_n)
