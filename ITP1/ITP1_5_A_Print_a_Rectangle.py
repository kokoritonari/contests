while True:
    H, W = map(int, input().rstrip().rsplit())
    if H == 0 and W == 0:
        break
    for i in range(H):
        for j in range(W):
            print("#", end="")
        print()
    print()
