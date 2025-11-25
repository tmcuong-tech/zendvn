str = "ab@#AB69C!}+21"

numberOnly = ""
characterOnly = ""
specialOnly = ""

for elm in str:
    if elm.isdigit():
        numberOnly += elm
    elif elm.isalpha():
        characterOnly += elm
    else:
        specialOnly += elm

print(f"Chuỗi số: {numberOnly}")
print(f"Chuỗi chữ: {characterOnly}")
print(f"Chuỗi đặc biệt: {specialOnly}")
