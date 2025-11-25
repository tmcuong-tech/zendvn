height = 6

shape = ""
for i in range(1, height + 1):
    record = [str(j) for j in range(i, i + 5, 2)]
    record = " ".join(record)
    shape += record + "\n"

print(shape)
