while True:
    nlist = [int(n) for n in input().rstrip().rsplit()]
    if nlist[0] == 0 and nlist[1] == 0:
        break
    nlist.sort()
    print(nlist[0], nlist[1])
