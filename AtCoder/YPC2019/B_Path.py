import sys
a=sys.stdin.read().split()
print(["YES","NO"][bool(sum(True for b in set(a)if a.count(b)>2))])
