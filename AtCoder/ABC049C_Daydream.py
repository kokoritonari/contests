# print(["No","Yes"][input().replace("eraser","").replace("erase","").replace("dreamer","").replace("dream","")==""])
s=input()
for t in["eraser","erase","dreamer","dream"]:s=s.replace(t,"")
print("NO"if s else"YES")
