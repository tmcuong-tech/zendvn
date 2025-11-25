arrInt = [14, 12, 3, 5, 6]
number = 3

result = "Không tồn tại"

for elm in arrInt:
    if elm != 0 and number % elm == 0:
        result = "Tồn tại"
        break

print(result)
