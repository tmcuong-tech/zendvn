number = 27

result = 1
start = number - 1
if start % 2 == 0:
    start -= 1

for i in range(start, 1, -2):
    if number % i == 0:
        result = i
        break

print(f"Ước số lẻ lớn nhất của {number} là {result}")
