height = 5

shape = ""
for i in range(1, height + 1):
    space = " " * (height - i)

    left = [str(j) for j in range(i, 1, -1)]
    left = "".join(left)
    right = [str(j) for j in range(2, i + 1)]
    right = "".join(right)

    record = space + left + "1" + right + space
    shape += record + "\n"

print(shape)
