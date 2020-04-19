w,h,x,y,r=map(int,input().split())
print(("No","Yes")[(r<=x<=w-r)*(r<=y<=h-r)])
# W, H, x, y, r = map(int, input().split())
# print(["No", "Yes"][(r <= x <= W - r) * (r <= y <= H - r)])
