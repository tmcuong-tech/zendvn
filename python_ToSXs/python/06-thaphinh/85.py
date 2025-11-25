height = 7
shape = ""
shapeTop = ""
shapeBottom = ""
center = int(height / 2)

line = "1" + " " * (height - 2) + str(height)
for i in range(2, center + 1):
    record = (" " * (i - 1) +
              str(i) +
              " " * (height - 2 * i) +
              str(height - i + 1))
    shapeTop += record + "\n"

centerCharacter = " " * center + str(center + 1) + "\n"
for i in range(2 + center, height):
    record = (" " * (height - i) +
              str(height - i + 1) +
              " " * (2 * i - height - 2) +
              str(i))
    shapeBottom += record + "\n"

shape = line + "\n" + shapeTop + centerCharacter + shapeBottom + line
print(shape)
