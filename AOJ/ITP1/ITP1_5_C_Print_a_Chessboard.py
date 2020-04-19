while 1:
 h,w=map(int,input().split())
 if h==0:break
 for i in range(h):print(("#."*w)[i%2:][:w])
 print()
"""
while 1:
 h,w=map(int,input().split())
 if h==w==0:break
 for _ in range(h):
  print((["#.",".#"][_%2])*(w//2)+["#","."][_%2]*(w%2))
 print()
"""
"""
while True:
    H, W = map(int, input().split())
    if H == W == 0: break
    print(("#." * (W // 2) + "#" * (W % 2) + "\n" +".#" * (W // 2) + "." * (W % 2) + "\n") * (H // 2) + ("#." * (W // 2) + "#" * (W % 2) + "\n") * (H % 2))
"""
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
