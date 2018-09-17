input_line = [int(x) for x in input().rstrip().rsplit()]
a, b = input_line[0], input_line[1]

if a == b:
    print("a == b")
elif a > b:
    print("a > b")
elif a < b:
    print("a < b")
