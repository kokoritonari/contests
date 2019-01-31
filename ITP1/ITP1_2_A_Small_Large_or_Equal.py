a,b=map(int,input().split())
print("a",[">","==","<"][(a<b)+(a<=b)],"b")
# print("a",">"if a>b else "<" if a<b else "==","b")
