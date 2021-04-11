r, x, y = map(int, input().split())
d = (x ** 2 + y ** 2) ** 0.5
cnt = d // r
cnt += d < r
cnt += cnt * r != d
print(int(cnt))
