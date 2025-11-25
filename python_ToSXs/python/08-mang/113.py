arrInt = [2, -224, -16, 2]

for i in range(0, len(arrInt)):
    elm = arrInt[i]
    if elm < 0:
        arrInt[i] = abs(elm)

print(arrInt)
