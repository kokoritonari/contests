input_line = input().rstrip()
length = [int(x) for x in input_line.rsplit()]

area = length[0] * length[1]
perimeter = 2 * (length[0] + length[1])

print(area, perimeter)
