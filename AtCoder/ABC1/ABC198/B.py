s = input()
d = len(s) - len(s.rstrip('0'))
s = '0' * d + s
n = len(s)
print('Yes' if all(x == y for x, y in zip(s[:n//2], s[n//2:][::-1])) else 'No')
