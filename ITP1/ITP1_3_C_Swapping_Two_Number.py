while True:
    numbers = list(map(int, input().split()))
    if numbers[0] == numbers[1] == 0:
        break
    print(*sorted(numbers))