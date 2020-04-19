import math
a, b, theta = map(int, input().split())
theta = math.radians(theta)
S = a * b * math.sin(theta) / 2
L = math.sqrt(a ** 2 + b ** 2 - 2 * a * b * math.cos(theta)) + a + b
h = b * math.sin(theta)
print("{:.4f}\n{:.4f}\n{:.4f}".format(S, L, h))