height = 5

shape = ""
record = ""

for i in range(1, height + 1):
    space = " " * (height - i)

    character = [str(j) for j in range(i, 0, -1)]
    character = "".join(character)

    record = space + character
    shape += record + "\n"

print(shape)
