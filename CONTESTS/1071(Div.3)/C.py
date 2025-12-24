t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    m = min(a)
    d = min(x - m for x in a if x != m)

    print(max(m, d))