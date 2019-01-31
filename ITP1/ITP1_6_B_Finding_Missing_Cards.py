c=[f"{s} {i}"for s in "SHCD" for i in range(1,14)]
for _ in[0]*int(input()):c.remove(input())
if c!=[]:print(*c,sep="\n")
"""
import sys
c=[f"{s} {i}"for s in "SHCD" for i in range(1,14)]
input()
for s in sys.stdin:
 c.remove(s.strip())
if c!=[]:print(*c,sep="\n")
"""
"""
cards = [f"{suit} {i}" for suit in "SHCD" for i in range(1, 14)]
for _ in range(int(input())):
    cards.remove(input())
for card in cards:
    print(card)
"""
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
