a=[list(map(int,input().split()))for _ in[0]*int(input()[0])]
for l in a:l+=[sum(l)];print(*l)
print(*map(sum,zip(*a)))
"""
r,c=map(int,input().split())
a=[];s=[0]*(c+1)
for _ in [0]*r:a+=[list(map(int,input().split()))];a[-1]+=[sum(a[-1])];s=[x+y for x,y in zip(s,a[-1])]
for b in a+[s]:print(*b)
"""
"""
r, c = map(int, input().split())
sheet = []
sumcol = [0 for i in range(c+1)]
for i in range(r):
    line = list(map(int, input().split()))
    line.append(sum(line))
    sheet.append(line)
    sumcol = [s+l for s, l in zip(sumcol, line)]
sheet.append(sumcol)

for line in sheet:
    print(*line)
"""
