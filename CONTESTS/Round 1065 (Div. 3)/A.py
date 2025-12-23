N = int(input())

for i in range(N):
    legs = int(input())

    if legs % 2 != 0:
        print(0)
    else:
        print((legs // 4) + 1)
