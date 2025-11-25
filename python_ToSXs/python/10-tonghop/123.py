num = 99992

zsum = 0

while num > 0:
    lastNumber = num % 10

    zsum += lastNumber
    num = int(num / 10)

    if num == 0 and zsum > 10:
        num = zsum
        zsum = 0

print(zsum)
