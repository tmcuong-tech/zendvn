height = 7

length = int(height / 2)
shape = ""
shapeTop = ""
space = ""
character = ""

for i in range(1, length + 1):
    space = " " * (length + 1 - i)
    character = "o" * (i * 2 - 1)
    shapeTop += space + character + space + "\n"

shapeBottom = shapeTop[::-1]

shape = shapeTop + "o" * height + shapeBottom
print(shape)
