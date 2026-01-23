s = input()
s = s.replace("+", "")

s = list(s)
s.sort()

s = "+".join(s)
print(s)