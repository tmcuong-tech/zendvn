height = 9

character = "#"
shape = character * height + "\n"

for i in range(2, height):
    record = (" " * (height - i)) + character
    shape += record + "\n"

shape += character * height
print(shape)
