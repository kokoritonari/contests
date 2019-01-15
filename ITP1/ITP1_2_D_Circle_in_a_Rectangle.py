W,H,x,y,r=map(int,input().split())
print(("No","Yes")[r<x<W-r and r<y<H-r])
# W, H, x, y, r = map(int, input().split())
# print(["No", "Yes"][(r <= x <= W - r) * (r <= y <= H - r)])
