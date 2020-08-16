print("",*[i for i in range(3,-~int(input()))if 0==i%3or"3"in str(i)])
"""
def call(n):
    i = 1
    while i <= n:
        if i % 3 == 0:
            print("", i, end="")
        else:
            x = i
            while x:
                if x % 10 == 3:
                    print("", i, end="")
                    break
                else:
                    x //= 10
        i += 1

    print()
"""
"""
def call(n):
    i = 1
    while i < n:
        if i % 3 == 0:
            print(" "+str(i), end="")
        else:
            x = i
            while x:
                if x % 10 == 3:
                    print(" "+str(i), end="")
                    break
                else:
                    x //= 10
        i += 1

    print(" "+str(n))
"""
