"""
while True:
    text = input().rstrip().rsplit()
    if text[0] == "?":
        break
    else:
        op = text[1]
        a, b = int(text[0]), int(text[2])
        if op == "+":
            print(a + b)
        elif op == "-":
            print(a - b)
        elif op == "*":
            print(a * b)
        elif op == "/":
            print(a // b)
        else:
            continue
"""
while True:
    a, op, b = input().rstrip().rsplit()
    a, b = int(a), int(b)
    if op == "+":
        print(a + b)
    elif op == "-":
        print(a - b)
    elif op == "*":
        print(a * b)
    elif op == "/":
        print(a // b)
    elif op == "?":
        break
    else:
        continue
