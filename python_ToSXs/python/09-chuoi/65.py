str = "D:/Data/Doing/psd/hailan.doc"

arrStr = str.split("/")

file = arrStr[len(arrStr) - 1]
fileArr = file.split(".")

extension = fileArr.pop()
name = ".".join(fileArr)

print(f"Name: {name}")
print(f"Extension: {extension}")
