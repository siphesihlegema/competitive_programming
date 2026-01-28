k, n, w = map(int, input().split())

total = 0

for i in range(w + 1):
    total += k*(i)

if n - total >= 0:
    print(0)
else:
    print(total - n)