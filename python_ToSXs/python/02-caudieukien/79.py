year = 2000
month = 1
day = 0

match month:
    case 1 | 3 | 5 | 7 | 8 | 10 | 12:
        day = 31
    case 4 | 6 | 9 | 11:
        day = 30
    case 2:
        if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
            day = 29
        else:
            day = 28
print(f"Tháng {month} năm {year} có {day} ngày.")
