s=input()
print(([c for c in s if s.count(c)==1]+[-1])[0])
