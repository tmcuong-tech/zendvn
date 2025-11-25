arrInt = [1, 2, 3, 2]

arrInt.sort()
result = ""

for elm in arrInt:
    result += str(elm) + "-"

result = result[0:len(result) - 1]
print(result)
