arrInt = [1, 2, 3]

result = "Tăng dần"

for i in range(0, len(arrInt) - 1):
    if arrInt[i] >= arrInt[i + 1]:
        result = "Không tăng dần"
        break

print(result)
