import sys,collections
q=collections.deque();input()
for s in sys.stdin:
 if"n"in s:q.appendleft(s.split()[1])
 elif"F"in s:q.popleft()
 elif"L"in s:q.pop()
 else:
  try:q.remove(s.split()[1])
  except:pass
print(*q)
