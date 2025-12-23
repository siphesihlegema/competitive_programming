t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    sa = sb = can_a = can_b = 0
    
    for i in range(n):
        sa ^= a[i]
        sb ^= b[i]
        if a[i] != b[i]:
            if i % 2 == 0: can_a = 1
            else: can_b = 1
            
    
    if can_a: sa = 1
    if can_b: sb = 1
    
    if sa > sb: print("Ajisai")
    elif sb > sa: print("Mai")
    else: print("Tie")