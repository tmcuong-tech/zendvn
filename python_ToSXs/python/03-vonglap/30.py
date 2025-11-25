start = 1
end = 10

result = ""

startNew = start + 1
if startNew % 2 != 0:
    startNew += 1

for i in range(startNew, end, 2):
    result += f"{i} "

if result == "":
    print("Không có")
else:
    print(result)
