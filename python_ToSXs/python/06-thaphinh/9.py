height = 4

shape = ""
for i in range(1, height + 1):
    character = "+"
    if i % 2 == 0:
        character = "="
    record = str(i) + character * i
    shape += record + "\n"

print(shape)
