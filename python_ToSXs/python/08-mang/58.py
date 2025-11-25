arrInt = [4, 2, 3, 6]

sumEven = 0
sumOdd = 0
sumAll = 0

for elm in arrInt:
    if elm % 2 == 0:
        sumEven += elm
    else:
        sumOdd += elm

sumAll = sumEven + sumOdd

print(f"SumEven: {sumEven}")
print(f"SumOdd: {sumOdd}")
print(f"SumAll: {sumAll}")
