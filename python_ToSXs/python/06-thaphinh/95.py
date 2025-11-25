height = 7

shape = ""
record = ""

for i in range(1, height + 1):
    character = "#" if (i % 2 == 0) else "o"
    around = " " * (height - i)
    center = (str(i) + character) * i

    center = center[0:len(center) - 1]
    record = around + center + around

    shape += record + "\n"

for i in range(1, int(height / 2) + 1):
    space1 = " " * int((height + 1) / 2)
    space2 = " " * (height - 4)
    record = space1 + "|" + space2 + "|"
    shape += record + "\n"

shape += "-" * (2 * height - 1)

print(shape)
