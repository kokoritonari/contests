a, b = map(int, input().split())
d, r = divmod(a, b)
f = a / b
print("{} {} {:.5f}".format(d, r, f))