s=input()
t=input()
ans="Yes"
if set(s) != set(t):
 print("No")
 exit(0)
for c in set(s):
 sc=s.count(c)
 tc=t.count(c)
 if sc != tc:
  if sc > tc:
   ans="No"
   break
  if sc < 2:
   ans="No"
   break
print(ans)
