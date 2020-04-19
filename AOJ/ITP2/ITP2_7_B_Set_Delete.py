S = set()
for _ in [0]*int(input()):
    q, x = input().split()
    if q == "0": S.add(x); print(len(S))
    elif q == "1": print(1 if x in S else 0)
    elif x in S: S.remove(x)

"""
S = set()
for _ in [0]*int(input()):
    q, x = input().split()
    if q == "0": S.add(x); print(len(S))
    elif q == "1": print(1 if x in S else 0)
    else:
        try:
            S.remove(x)
        except:
            pass
"""