t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    total = 0
    for i in range(n - 1):
        total += abs(a[i] - a[i + 1])

    best = total

    for k in range(n):
        cur = total

        if k > 0:
            cur -= abs(a[k] - a[k - 1])
        if k < n - 1:
            cur -= abs(a[k] - a[k + 1])
        if 0 < k < n - 1:
            cur += abs(a[k - 1] - a[k + 1])

        if cur < best:
            best = cur

    print(best)
