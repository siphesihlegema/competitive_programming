n = int(input())
database = {}

for i in range(n):
    name = input()

    if name not in database:
        database[name] = 1
        print("OK")
    else:
        new_name = name + str(database[name])
        print(new_name)

        database[new_name] = 1

        database[name] += 1