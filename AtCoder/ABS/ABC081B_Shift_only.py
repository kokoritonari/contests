input();a=list(map(int,input().split()));c=0
while sum(n%2==1 for n in a)<1:
 a=[n//2for n in a];c+=1
print(c)
# input();print(bin(eval(input().replace(" ","|")))[::-1].find("1"))
