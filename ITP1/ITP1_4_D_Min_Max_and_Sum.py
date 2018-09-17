n = int(input())
line = [int(num) for num in input().rstrip().rsplit()]

"""
min, max, sum = line[0], line[0], 0
i = 0

while i < n:
    if min > line[i]:
        min = line[i]
    if max < line[i]:
        max = line[i]
    sum += line[i]
    i += 1

print(min, max, sum)
"""

min = min(line)
max = max(line)
sum = sum(line)

print(min, max, sum)
