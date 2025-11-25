height = 7
shape = ""
shapeTop = ""
shapeBottom = ""
character = "#"
center = int(height / 2)

line = character * height
for i in range(2, center + 1):
    record = (character + " " * (i - 2) +
              character + " " * (height - 2 * i) +
              character + " " * (i - 2) +
              character)
    shapeTop += record + "\n"

centerCharacter = character + " " * (center - 1) + character + " " * (center - 1) + character + "\n"
for i in range(2 + center, height):
    record = (character + " " * (height - i - 1) +
              character + " " * (2 * i - height - 2) +
              character + " " * (height - i - 1) +
              character)
    shapeBottom += record + "\n"

shape = line + "\n" + shapeTop + centerCharacter + shapeBottom + line
print(shape)
