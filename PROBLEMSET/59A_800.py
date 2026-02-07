s = input()

length = len(s)
count = 0

for i in s:
    if i == i.capitalize():
        count+=1

if count > length/2:
    print(s.upper())
else:
    print(s.lower())