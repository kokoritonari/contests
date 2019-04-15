n,k=map(int,input().split())
s=input()
t=sum(sorted(map(len,s.split("1")))[-k:])
print(s.count("1")+t)
