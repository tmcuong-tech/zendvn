str = "luutruonghailan"
key = "3633"

result = ""
startIndex = 0
endIndex = 0

for elm in key:
    currentNumber = int(elm)
    endIndex += currentNumber

    word = str[startIndex:endIndex]
    result += word.capitalize() + " "
    startIndex = endIndex

print(result.strip())
