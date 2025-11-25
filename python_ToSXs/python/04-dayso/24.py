n = 4

result = ""
zsum = 0
for i in range(1, n + 1):
    zsum += pow(i, 2)
    result += f"{i}^{2}" + " + "

result = result[0:len(result) - 3]
print(f"{result} = {zsum}")
