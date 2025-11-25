arrInt = [2, -224, -16, 2, 3]

arrNew = []

for i in range(0, len(arrInt)):
    if arrInt[i] >= 0:
        arrNew.append(arrInt[i])

print(arrNew)
