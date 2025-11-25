number = 105

result = "Dữ liệu không hợp lệ"

if 100 <= number < 1000:
    dictionary = ["không", "một", "hai", "ba", "bốn", "năm", "sáu", "bảy", "tám", "chín"]

    digit_000 = int(number / 100)
    digit_00 = int(number / 10) % 10
    digit_0 = number % 10

    str_000 = dictionary[digit_000] + " trăm"

    str_00 = dictionary[digit_00] + " mươi"
    if digit_00 == 0:
        str_00 = " linh"
    if digit_00 == 1:
        str_00 = " mười"

    str_0 = dictionary[digit_0]
    if digit_00 > 1 and digit_0 == 1:
        str_0 = " mốt"
    if digit_00 > 0 and digit_0 == 5:
        str_0 = " lăm"

    if digit_00 == 0 and digit_0 == 0:
        str_00 = ""
        str_0 = ""

    if digit_0 == 0:
        str0 = ""

    result = str_000.strip() + " " + str_00.strip() + " " + str_0

print(result)
