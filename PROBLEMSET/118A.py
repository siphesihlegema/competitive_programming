s = input()

vowels = "aoyeuiAOYEUI"

result = ""

for char in s:
    if char not in vowels:
        result += "." + char.lower()


print(result)
