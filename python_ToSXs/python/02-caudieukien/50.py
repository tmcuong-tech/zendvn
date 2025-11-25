yourNumber = 4

strOne = "dương"
strTwo = "chẵn"

if yourNumber < 0:
    strOne = "âm"
if yourNumber % 2 != 0:
    strTwo = "lẻ"

print(f"Số nguyên {strOne} {strTwo}")
