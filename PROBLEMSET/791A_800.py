a, b = map(int, input().split())

itter = 0
while a <= b:
    a = a*3
    b = b*2
    itter+=1

print(itter)
