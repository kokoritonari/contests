while True:
    H, W = map(int, input().split())
    if H == W == 0: break
    

"""
while True:
    H, W = map(int, input().split())
    if H == 0 and W == 0:
        break
    for i in range(H):
        for j in range(W):
            print("#" if (i + j) % 2 == 0 else ".", end="")
        print()
    print()
"""