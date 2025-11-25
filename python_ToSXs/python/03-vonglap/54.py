yourNumber = 123

result = "Yes"

rightDigit = yourNumber % 10
yourNumber = int(yourNumber / 10)

while yourNumber > 0:
    currentDigit = yourNumber % 10
    yourNumber = int(yourNumber / 10)

    if currentDigit >= rightDigit:
        result = "No"
        break

    rightDigit = currentDigit

print(result)
