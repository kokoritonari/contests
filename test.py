import time
import collections
x = "hehe"
A = [i for i in range(1000000)]
# A = collections.deque([i for i in range(1000000)])
start = time.time()
# del A[0]         0.0051043033599853516
# A.pop(0)         0.005172014236450195
# A.popleft()      1.2159347534179688e-05
# A = A[1:]        0.016885995864868164
# A.insert(100, x) 0.004876136779785156
# A.insert(100, x) 1.5020370483398438e-05
# A = A[100:] + [x] + A[101:] 0.05580425262451172
print(time.time() - start)