n = 4

result = ""
zsum = 0
multi = 1

for i in range(1, n + 1):
    part = ""
    multi *= i
    zsum += multi

    for j in range(1, i):
        part += str(j) + "x"

    result += part + str(i) + " + "

result = result[0:len(result) - 3]
print(f"{result} = {zsum}")
