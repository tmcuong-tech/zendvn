height = 5
shape = ""
shapeTop = ""
shapeBottom = ""
character = "#"
center = int(height / 2)

line = character * height
for i in range(2, center + 1):
    record = (" " * (i - 1) + character +
              " " * (height - 2 * i) +
              character)
    shapeTop += record + "\n"

centerCharacter = " " * center + character + "\n"
for i in range(2 + center, height):
    record = (" " * (height - i) +
              character +
              " " * (2 * i - height - 2) +
              character)
    shapeBottom += record + "\n"

shape = line + "\n" + shapeTop + centerCharacter + shapeBottom + line
print(shape)
