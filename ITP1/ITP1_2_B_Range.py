nlist = [int(n) for n in input().rstrip().rsplit()]

if nlist[0] < nlist[1] and nlist[1] < nlist[2]:
    print("Yes")
else:
    print("No")
