nlist = [int(n) for n in input().rstrip().rsplit()]
W, H, x, y, r = nlist

print("Yes" if r <= x and x <= W - r and r <= y and y <= H - r else "No")
