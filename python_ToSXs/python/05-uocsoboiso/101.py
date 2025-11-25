number = 30
result = ""

for i in range(1, number + 1):
    if number % i == 0:
        result += str(i) + " "

print(f"Ước số của {number} là {result}")
