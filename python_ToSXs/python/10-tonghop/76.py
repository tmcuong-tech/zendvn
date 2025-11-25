input = "2c+)1o!@(*&!y@&chi&^c!@#o3co$23%%^nd$#$!uo5ng"

zstr = "".join(filter(str.isalpha, input))
key = "".join(filter(str.isnumeric, input))

result = ""
startIndex = 0
endIndex = 0

for elm in key:
    currentNumber = int(elm)
    endIndex += currentNumber

    word = zstr[startIndex:endIndex]
    result += word.capitalize() + " "
    startIndex = endIndex

print(result.strip())
