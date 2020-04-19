while 1:
 h,w=map(int,input().split())
 if h==0:break
 print("#"*w+"\n"+("#"+"."*(w-2)+"#\n")*(h-2)+"#"*w+"\n")
"""
while True:
    H, W = map(int, input().split())
    if H == 0 and W == 0:
        break
    for i in range(H):
        for j in range(W):
            print("#" if i == 0 or j == 0 or i == H - 1 or j == W - 1 else ".", end="")
        print()
    print()
"""
