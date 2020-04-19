W = input()
T = ""
while True:
    t = input()
    if t == "END_OF_TEXT":
        break
    T += t + " "

T = [t.rstrip(",.") for t in T.lower().split()]
print(T.count(W))