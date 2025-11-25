arrInt = [0, 1, 2, 1, 0]

length = len(arrInt)
result = "Đối xứng"

for i in range(int(length / 2)):
    if arrInt[i] != arrInt[length - i - 1]:
        result = "Không đối xứng"
        break

print(result)
