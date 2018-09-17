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