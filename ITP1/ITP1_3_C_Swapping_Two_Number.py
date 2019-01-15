import sys
for s in sys.stdin:
    if"0 0\n"==s:break
    print(*sorted(map(int,s.split())))
"""
while True:
    numbers = list(map(int, input().split()))
    if numbers[0] == numbers[1] == 0:
        break
    print(*sorted(numbers))
"""
"""
while True:
    a,b=map(int,input().split())
    if a==b==0:break
    print(*[(a,b),(b,a)][a>b])
"""
