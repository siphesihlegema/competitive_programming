n = int(input())

luckynum = [4, 7, 44, 47, 74, 77, 444, 447, 474, 744, 477, 774, 747, 777 ]

yes = True

for i in luckynum:
    if n % i == 0:
        print("YES")
        yes = False
        break

if yes:
    print("NO")