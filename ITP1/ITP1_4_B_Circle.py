import math
r = float(input())
area = r ** 2 * math.pi
circum = 2 * r * math.pi
print("{:.5f} {:.5f}".format(area, circum))