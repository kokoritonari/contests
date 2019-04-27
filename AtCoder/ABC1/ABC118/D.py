n,m=map(int,input().split())
numbers=list(map(int,reversed(input().split())))
n_match=[[2,5,5,4,5,6,3,7,6][i-1]for i in numbers]
n_match_even=min([i for i in n_match if i%2==0])
n_match_odd =min([i for i in n_match if i%2==1])
number_even=n_match[n_match.index(n_match_even)]
numver_odd =n_match[n_match.index(n_match_odd )]
small_n_number=[n_match_odd,n_match_even][n_match_odd>n_match_even]
large_n_number=[n_match_odd,n_match_even][n_match_odd<n_match_even]
cnt=0
while n-large_n_number>0:
 n-=small_n_number
 cnt+=1
print(n,large_n_number)

#b={1:2,2:5,3:5,4:4,5:5,6:6,7:3,8:7,9:6}
#c={i:b[i]for i in a}
#m1=min(c.values())
#print(m1)
#m2=min(set(c.keys())-{})
