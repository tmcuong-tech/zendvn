arrInt = [9, 3, 4, 2]

zmin = arrInt[0]
zmax = arrInt[0]
total = arrInt[0]

for i in range(1, len(arrInt)):
    salaryCurrent = arrInt[i]
    if salaryCurrent < zmin:
        zmin = salaryCurrent
    if salaryCurrent > zmax:
        zmax = salaryCurrent
    total += salaryCurrent

total = total - zmin - zmax

print(total / (len(arrInt) - 2))
