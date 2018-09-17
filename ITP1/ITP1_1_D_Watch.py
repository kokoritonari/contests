S = int(input())

h, s1 = divmod(S, 3600)
m, s2 = divmod(s1, 60)
s = s2

print("{}:{}:{}".format(h, m, s))