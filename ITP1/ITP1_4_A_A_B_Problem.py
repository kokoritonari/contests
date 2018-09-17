a, b = [int(n) for n in input().rstrip().rsplit()]
# d = a // b
# r = a % b
d, r = divmod(a, b)
f = a / b
print(d, r, "{:.5f}".format(f))
