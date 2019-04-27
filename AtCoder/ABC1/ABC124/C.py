s=input()
l=len(s)
a=("10"*10000)[:l]
b=("01"*10000)[:l]
diff=lambda a,b: sum(s!=t for s,t in zip(a,b))
print(min(diff(a,s),diff(b,s)))
# print(*map(bin,[a,b,s]),sep="\n")
# print(min(str(bin(a^s)).count("1"),str(bin(b^s)).count("1")))
