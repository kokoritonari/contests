import itertools as it
# n=int(input())
# a=sorted(map(int,input().split()))
n,*a=map(int,open(0).read().split());a.sort();print(sum(sum(x)>2*x[2]and len(x)==len(set(x))for x in it.combinations(a,3)))
# n,*l=map(int,open(0).read().split())
# print(sum(i<j<k<i+j for i in l for j in l for k in l))
