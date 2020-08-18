import math
from statistics import pstdev
while int(input()):
    score = list(map(int, input().split()))
    """
    M = sum(score) / len(score)
    SD = math.sqrt(sum([(n - M) ** 2 for n in score]) / len(score))
    print("{:.4f}".format(SD))
    """
    print("{:.4f}".format(pstdev(score)))