n = 5

result = ""
multi = 1

for i in range(n, 0, -1):
    multi *= i
    result += str(i) + " * "

result = result[0:len(result) - 3]
print(f"{result} = {multi}")
