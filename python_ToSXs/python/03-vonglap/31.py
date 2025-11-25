start = 1
end = 30

result = ""
step = 13
startNew = start - (start % step) + step

for i in range(startNew, end, step):
    result += f"{i} "

if result == "":
    print("Không có")
else:
    print(result)
