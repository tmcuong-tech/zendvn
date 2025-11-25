height = 4

shape = " " * (height - 1) + "1" + "\n"
record = ""

for i in range(2, height + 1):
    space = " " * (height - i)
    number = str(i) + " " * (2 * i - 3) + str(i)

    record = space + number + space
    shape += record + "\n"

print(shape)
