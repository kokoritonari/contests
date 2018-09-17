n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
dxy = [abs(a - b) for a, b in zip(x, y)]
D = [sum([n ** p for n in dxy]) ** (1 / p) for p in range(1, 4)]
D.append(max(dxy))
for d in D:
    print("{:.5f}".format(d))