arrInt = [14, 12, 3, 21, 6]
number = 3

result = "Không tồn tại"

for elm in arrInt:
    if (elm % number == 0) and (elm % (number + 1) == 0):
        result = "Tồn tại"

print(result)
