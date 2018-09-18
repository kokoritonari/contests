while True:
    m, f, r = map(int, input().split())
    if m == f == r == -1: break
    s = m + f
    print("F" if m == -1 or f == -1 else "A" if s >= 80 else "B" if s >= 65 else "C" if s >= 50 else "F" if s < 30 else "C" if r >= 50 else "D")
"""
# Not working
while True:
    m, f, r = map(int, input().split())
    if m == f == r == -1: break
    s = m + f
    print("F" if m == -1 or f == -1 or s < 30 else ("ABCCD")[(0<r<50)+(s<50)+(s<65)+(s<80)])
"""
"""
while True:
    m, f, r = map(int, input().split())

    if m == -1 and f == -1 and r == -1:
        break
    
    if m == -1 or f == -1:
        grade = "F"
    elif m + f >= 80:
        grade = "A"
    elif m + f >= 65:
        grade = "B"
    elif m + f >= 50:
        grade = "C"
    elif m + f >= 30:
        if r >= 50:
            grade = "C"
        else:
            grade = "D"
    else:
        grade = "F"

    print(grade)
"""