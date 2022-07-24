n=int(input())
A=[input()for _ in range(n)]
print('incorrect'if sum(0 if A[i][j]+A[j][i]in['WL','LW','DD','--']else 1 for j in range(n) for i in range(n))else'correct')
