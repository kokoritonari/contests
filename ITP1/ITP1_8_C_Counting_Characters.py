sentence = ""
while True:
    try:
        sentence += input()
    except EOFError:
        break

sentence = sentence.lower()
for c in range(ord("a"), ord("z")+1):
    print("{} : {}".format(chr(c), sentence.count(chr(c))))