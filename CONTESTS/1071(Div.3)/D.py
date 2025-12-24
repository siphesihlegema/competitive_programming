t = int(input())
for _ in range(t):
    n = int(input())
    N = 1 << n
    used = [False] * N
    cur = N - 1
    ans = []

    while True:
        added = False
        for v in range(N):
            if not used[v] and (v & cur) == cur:
                used[v] = True
                ans.append(v)
                added = True

        if len(ans) == N:
            break

        msb = 1 << (cur.bit_length() - 1)
        v = cur ^ msb 
        used[v] = True
        ans.append(v)
        cur &= v

    print(*ans)
