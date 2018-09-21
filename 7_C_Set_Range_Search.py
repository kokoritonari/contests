S = set()
for _ in [0]*int(input()):
    query = input().split()
    if query[0] == "0": S.add(query[1]); print(len(S))
    elif query[0] == "1": print(1 if query[1] in S else 0)
    elif query[0] == "2":
        if query[1] in S: S.remove(query[1])
    else:
        sub = sorted(x for x in map(int, S) if int(query[1]) <= x <= int(query[2]))
        if len(sub) > 0:
            print(*sub, sep="\n")