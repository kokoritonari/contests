import sys
d=set();input()
for c in sys.stdin:
 if"i"==c[0]:d.add(c.split()[1])
 else:print(["no","yes"][c.split()[1]in d])
