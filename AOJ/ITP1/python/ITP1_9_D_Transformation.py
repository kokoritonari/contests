string = input()
q = int(input())
for _ in range(q):
    command = input().split()
    a, b = int(command[1]), int(command[2])
    if command[0] == "replace":
        string = string[:a] + command[3] + string[b+1:]
    elif command[0] == "reverse":
        string = string[:a] + string[a:b+1][::-1] + string[b+1:]
    elif command[0] == "print":
        print(string[a:b+1])