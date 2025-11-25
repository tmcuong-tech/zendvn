number = 13

result = "Không giải mã được"
lang = int(number / 10)
day = number % 10

dateVi = ["0", "1", "Thứ 2", "Thứ 3", "Thứ 4", "Thứ 5", "Thứ 6", "Thứ 7", "CN"]
dateEn = ["0", "1", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]

if (lang == 1 or lang == 2) and 2 <= day <= 8:
    if lang == 1:
        result = dateVi[day]
    elif lang == 2:
        result = dateEn[day]

print(result)
