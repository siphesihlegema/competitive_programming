word = input()

str = 'hello'
index = 0
for k in word:

    if k == str[index]:
        index+=1
    if index == 5:
        break

if index == 5:
    print('YES')
else: 
    print("NO")