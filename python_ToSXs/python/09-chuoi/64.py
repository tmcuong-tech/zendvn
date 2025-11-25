str = " java   Is easy  .  "

str = str.strip()
arrStr = str.split()

length = len(arrStr)
if arrStr[length - 1] == '.':
    arrStr.pop()

str = " ".join(arrStr)
str = str[0:1].upper() + str[1:].lower()
str += '.'

print(str)
