import random
import collections

def judge(money):
    if random.randrange(10) % 2 == 0:
        rate = 2
    else:
        rate = 0
    return rate * money

win, lose = 0, 0

for i in range(100000):
    money = 100
    arr = collections.deque([1, 2, 3])
    while True:
        if money <= 0:
            lose += 1
            break
        if money >= 200:
            win += 1
            break
        if len(arr) < 2:
            arr = collections.deque([1, 2, 3])

        bet = arr[0] + arr[-1]
        if bet > money:
            bet = money
        money -= bet
        gain = judge(bet)

        if gain == 0:
            arr.append(bet)
        else:
            arr.pop()
            arr.popleft()
            money += gain
        
print("win = {}, lose = {}, winrate = {}".format(win, lose, win / (win + lose)))