max=c=0
for s in input():
 if s in{"A","T","G","C"}:
  c+=1
 else:
  c=0
 max=(c,max)[max>c]
print(max)
