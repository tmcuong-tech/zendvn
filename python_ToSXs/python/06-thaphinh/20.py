height = 5

shape = ""

for i in range(1, height + 1):
    space = " " * (i - 1)

    character = [str(j) for j in range(1, height - i)]
    character = "".join(character)
    record = space + character
    shape += record + "\n"

print(shape)
