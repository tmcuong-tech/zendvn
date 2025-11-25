height = 5

record = [str(j) for j in range(1, height + 1, 1)]
record = "".join(record) + "\n"
shape = record

for i in range(2, height):
    record = str(i) + " " * (height - 2) + str(i + height - 2 + 1)
    shape += record + "\n"

record = [str(j) for j in range(height, height * 2, 1)]
record = "".join(record)
shape += record

print(shape)
