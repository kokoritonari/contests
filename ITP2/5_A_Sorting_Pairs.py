coordinates = [list(map(int, input().split())) for _ in [0]*int(input())]
for c in sorted(coordinates): print(*c)