n = int(input())
cards = {}
taro, hanako = 0, 0
for _ in range(n):
    cards["taro"], cards["hanako"] = input().split()
    if cards["taro"] > cards["hanako"]:
        taro += 3
    elif cards["taro"] < cards["hanako"]:
        hanako += 3
    else:
        taro += 1
        hanako += 1

print(taro, hanako)