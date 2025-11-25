height = 6

shape = ""
for i in range(1, height + 1):
    around = "#" * (height - i)
    center = str(i) * (2 * i - 1)
    record = around + center + around

    shape += record + "\n"

print(shape)
