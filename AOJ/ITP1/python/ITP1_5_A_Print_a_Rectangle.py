for e in list(open(0))[:-1]:h,w=map(int,e.split());print(('#'*w+'\n')*h)
"""
while 1:
 h,w=map(int,input().split())
 if h==0:break
 print(("#"*w+"\n")*h)
"""
"""
while True:
    H, W = map(int, input().split())
    if H == 0: break
    print(("#" * W + "\n") * H)
"""
"""
while True:
    H, W = map(int, input().split())
    if H == 0 and W == 0:
        break
    for i in range(H):
        for j in range(W):
            print("#", end="")
        print()
    print()
"""
