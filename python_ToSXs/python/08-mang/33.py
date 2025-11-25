arrInt = [1, 3, 2]

result = "Không tồn tại"
length = len(arrInt)

if length >= 3:
    for i in range(1, len(arrInt) - 1):
        if arrInt[i] == arrInt[i - 1] + arrInt[i + 1]:
            result = "Tồn tại"
            break

print(result)
