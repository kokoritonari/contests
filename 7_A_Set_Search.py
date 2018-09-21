S = set()
for _ in [0]*int(input()):
    q, x = input().split()
    if q == "0": S.add(x); print(len(S))
    else: print(1 if x in S else 0)