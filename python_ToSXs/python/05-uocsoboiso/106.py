x = 20
y = 2

result = ""

for i in range(1, x + 1):
    if x % i == 0 and i % y == 0:
        result += str(i) + " "

print(result)
