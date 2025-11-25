yourNumber = 426

result = "Yes"

while yourNumber > 0:
    lastNumber = yourNumber % 10

    if lastNumber % 2 != 0:
        result = "No"
        break

    yourNumber = int(yourNumber / 10)

print(result)
