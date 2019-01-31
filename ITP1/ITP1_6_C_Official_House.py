h=[[[0]*10for i in[0]*3]for j in[0]*4];i=0
for _ in[0]*int(input()):b,f,r,v=map(int,input().split());h[~-b][~-f][~-r]+=v
for b in h:
 for f in b:print("",*f)
 print(("","#"*20+"\n")[i<3],end="");i+=1
"""
dorm = [[[0 for i in range(10)] for j in range(3)] for k in range(4)]
for _ in range(int(input())):
    b, f, r, v = map(int, input().split())
    dorm[b-1][f-1][r-1] += v
for i, b in enumerate(dorm):
    for f in b:
        print("", *f)
    if i < 3: print("#" * 20)
"""
"""
dorm = [[[0 for i in range(10)] for j in range(3)] for k in range(4)]
for n in range(int(input())):
    i, j, k, n = map(int, input().split())
    dorm[i-1][j-1][k-1] += n

for i in range(4):
    for j in range(3):
        for k in range(10):
            print("", dorm[i][j][k], end="")
        print()
    if i < 3:
        print("#" * 20)
"""
