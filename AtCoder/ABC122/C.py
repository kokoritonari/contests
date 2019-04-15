import sys
n,q=input().split()
s=input();a=[0]*2
for i in range(2,int(n)+1):
 a+=[a[i-1]+s[i-2:i].count("AC")]
for e in sys.stdin:
 l,r=map(int,e.split())
 print(a[r]-a[l])
"""
import sys
input=sys.stdin.readline
n,q=map(int,input().split())
s=input();a=[0]*2
for i in range(2,n+1):
 a+=[a[i-1]+s[i-2:i].count("AC")]
for _ in range(q):
 l,r=map(int,input().split())
 print(a[r]-a[l])
"""
