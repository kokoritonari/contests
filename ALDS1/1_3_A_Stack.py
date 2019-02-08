s=[]
for e in input().split():
 s+=[str(eval(s.pop(-2)+e+s.pop()))if e in"+-*"else e]
print(*s)
