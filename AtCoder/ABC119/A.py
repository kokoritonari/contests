y,m,d=map(int,input().split("/"))
if y==2019:
 if m>4:
  print("TBD")
  exit()
 else:
  print("Heisei")
elif y>2019:
 print("TBD")
else:
 print("Heisei")
