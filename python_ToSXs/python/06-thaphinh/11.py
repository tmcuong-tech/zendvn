height = 5

shape = ""
for i in range(1, height + 1):
    record = "=" * (height - i) + "+" * i
    shape += record + "\n"

print(shape)
