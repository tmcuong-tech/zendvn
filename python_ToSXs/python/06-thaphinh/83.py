height = 5

shape = ""
record = ""

for i in range(1, height + 1):
    record = " " * (i - 1) + str(i)
    shape += record + "\n"

print(shape)
