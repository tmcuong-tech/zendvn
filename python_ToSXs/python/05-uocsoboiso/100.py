number = 25

result = ""
index = 0
tmp = 0

while number * index < 100:
    tmp = number * index
    result += str(tmp) + " "
    index += 1

print(f"Bội nhỏ hơn 100 của {number} là {result}")
