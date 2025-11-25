n = 5

result = ""
zsum = 0

for i in range(1, n + 1):
    zsum += i
    result += str(i) + " + "

result = result[0:len(result) - 3]
print(f"{result} = {zsum}")
