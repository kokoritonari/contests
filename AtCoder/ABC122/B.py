print(len(max("".join(str(int(c in"ATGC"))for c in input()).split("0"))))
# import re;print(max(map(len,re.findall("[ATGC]+",input()))))
"""
max=c=0
for s in input():
 if s in{"A","T","G","C"}:
  c+=1
 else:
  c=0
 max=(c,max)[max>c]
print(max)
"""
