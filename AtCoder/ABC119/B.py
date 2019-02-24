import sys
s=0;input()
for e in sys.stdin:
 a,b=e.split()
 s+=int(a) if b=="JPY"else float(a)*380000
print(s)
