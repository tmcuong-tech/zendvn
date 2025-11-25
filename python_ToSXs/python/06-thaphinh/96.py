height = 5

shape = ""
start = 1
end = 1

for i in range(1, height + 1):
    record = ""
    for j in range(start, end + 1):
        number = "0" + str(j) if j < 10 else str(j)
        record += number + " "

    shape += record + "\n"
    start = end + 1
    end = start + i

print(shape)
