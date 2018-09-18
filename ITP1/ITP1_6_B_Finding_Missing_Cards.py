cards = [f"{suit} {i}" for suit in "SHCD" for i in range(1, 14)]
for _ in range(int(input())):
    cards.remove(input())
for card in cards:
    print(card)

"""
cards = ["{} {}".format(suit, i) for suit in "SHCD" for i in range(1, 14)]
for _ in range(int(input())):
    cards.remove(input())
print(*cards, sep="\n")
"""
"""
cards = {suit:[n for n in range(1, 14)] for suit in "SHCD"}
for _ in range(int(input())):
    suit, n = input().split()
    cards[suit].remove(int(n))
for suit in "SHCD":
    for n in cards[suit]:
        print(suit, n)
"""