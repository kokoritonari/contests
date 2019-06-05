R = [int(input()) for _ in [0]*int(input())]
minv = R[0]
maxv = -1e+10
for j in range(1, len(R)):
    maxv = max(maxv, R[j]-minv)
    minv = min(minv, R[j])
print(maxv)
"""
R = [int(input()) for _ in [0]*int(input())]
print(max([max(R[i+1:]) - R[i] for i in range(len(R)-1)]))
"""
"""
R = [int(input()) for _ in [0]*int(input())]
maxv = -1e+10
for j in range(1, len(R)-1):
    for i in range(0, j-1):
        maxv = max(maxv, R[j]-R[i])
print(maxv)
"""