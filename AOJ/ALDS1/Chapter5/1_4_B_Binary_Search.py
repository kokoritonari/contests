input();s=input().split()
input();t=input().split()
# print(len(set(s)&set(t)))
print(sum([m in s for m in t]))
