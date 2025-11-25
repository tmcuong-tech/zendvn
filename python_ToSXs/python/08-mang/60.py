arrInt = [1, 2, 3]
number = 3

result = "Không tồn tại"

for elm in arrInt:
    if (elm == number):
        result = "Tồn tại"
        break

print(result)
