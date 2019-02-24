n,k=map(int,input().split())
print(["NO","YES"][n+n%2>=k*2])
"""
from math import factorial
n,k=map(int,input().split())
print(["NO","YES"][factorial(n)/factorial(k)-(n-1)*factorial(n-2)/factorial(k-2)>1])
"""
