x, k, d = map(int, input().split())
x = abs(x)
wantk = x // d
if wantk > k:
    print(abs(x - k * d))
    exit()
x -= wantk * d
k -= wantk
if k % 2 == 0:
    print(abs(x))
else:
    print(abs(x - d))
