a,b=map(int,input().split());print(a//b,a%b,f'{a/b:f}')
"""
a, b = map(int, input().split())
d, r = divmod(a, b)
f = a / b
print(f"{d} {r} {f:.5f}")
"""
