number = 144

result = ""

for i in range(2, number + 1, 2):
    if number % i == 0:
        result += str(i) + " "

print(f"Ước số chẵn của {number} là {result}")
