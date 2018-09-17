cards = {suit:[n for n in range(1, 14)] for suit in "SHCD"}
for i in range(int(input())):
    suit, n = input().split()
    cards[suit].remove(int(n))
for suit in "SHCD":
    for n in cards[suit]:
        print(suit, n)
