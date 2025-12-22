n = int(input())

xtot = 0
ytot = 0
ztot = 0

for _ in range(n):
    x, y, z = map(int, input().split())
    xtot += x    
    ytot += y
    ztot += z

if xtot == 0 & ytot == 0 & ztot == 0:
    print("YES")
else:
    print("NO")
