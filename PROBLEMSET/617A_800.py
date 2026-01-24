x = int(input())

out = 0

if x <= 5:
    print(1)
elif x > 5:
    remainder = x % 5
    if remainder == 4:
        y = x - remainder
        out += y // 5
        out += 1
        print(out)
    elif remainder == 3:
        y = x - remainder
        out += y // 5
        out += 1
        print(out)
    elif remainder == 2:
        y = x - remainder
        out += y // 5
        out += 1
        print(out)
    elif remainder == 2:
        y = x - remainder
        out += y // 5
        out += 1
        print(out)
    elif remainder == 1:
        y = x - remainder
        out += y // 5
        out += 1
        print(out)
    elif remainder == 0:
        out = x // 5
        print(out)
    