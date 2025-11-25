arrInt = [1, 2, 3, 4, 9]

maxOne = max(arrInt)
maxTwo = arrInt[0]
count = 0

for elm in arrInt:
    if elm == maxOne:
        count += 1

    if maxTwo < elm < maxOne:
        maxTwo = elm

if count > 1:
    maxTwo = maxOne

print(f"Max 1: {maxOne} - Max 2: {maxTwo}")
