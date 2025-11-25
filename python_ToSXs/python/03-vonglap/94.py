yourNumber = 126

zsum = 0
result = ""

while yourNumber > 0:
    lastNumber = yourNumber % 10
    yourNumber = int(yourNumber / 10)

    zsum += lastNumber
    result = result + str(lastNumber) + " + "

result = result[0:len(result) - 3]
print(f"{result} = {zsum}")
