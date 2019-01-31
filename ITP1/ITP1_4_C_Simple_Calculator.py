import sys
for e in sys.stdin:
 if"?"in e:break
 print(int(eval(e)))
"""
while 1:
 s=input()
 if"?"in s: break
 print(int(eval(s)))
"""
"""
while True:
    a, op, b = input().split()
    a, b = int(a), int(b)
    if op == "?": break
    print(a+b if op=="+" else a-b if op=="-" else a*b if op=="*" else a//b)
"""
