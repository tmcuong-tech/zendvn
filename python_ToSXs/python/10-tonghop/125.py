str = "cddddeeffffdcba"

powerCharacter = str[0]
powerTime = 1
result = 0

for i in range(len(str) - 1):
    if powerCharacter == str[i + 1]:
        powerTime += 1
    else:
        powerCharacter = str[i + 1]
        if powerTime >= result:
            result = powerTime
        powerTime = 1

result = max(powerTime, result)

print(result)
