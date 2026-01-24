n = int(input())
s = input()

tot = 0
for i in range(n - 1):
    if s[i] == s[i+1]:
        tot += 1

print(tot)