height = 8

shape = ""
for i in range(1, height + 1):
    around = "#" * (height - i)

    left = [str(j) for j in range(1, i)]
    left = "".join(left)
    right = [str(j) for j in range(i - 1, 0, -1)]
    right = "".join(right)

    center = left + str(i) + right
    record = around + center + around

    shape += record + "\n"

print(shape)
