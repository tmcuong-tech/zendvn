height = 5

shape = ""
for i in range(1, height + 1):
    record = [str(j) for j in range(i, height + 1)]
    record = "".join(record)
    shape += record + "\n"

print(shape)
