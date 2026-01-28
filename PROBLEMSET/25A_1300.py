
n = int(input())
numbers = list(map(int, input().split()))

evens = [i + 1 for i, x in enumerate(numbers) if x % 2 == 0]
odds = [i + 1 for i, x in enumerate(numbers) if x % 2 != 0]

if len(evens) == 1:
    print(evens[0])
else:
    print(odds[0])
