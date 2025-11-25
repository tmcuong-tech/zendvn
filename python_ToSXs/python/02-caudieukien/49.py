year = 2000

result = "Không là năm nhuận"

if year % 400 == 0 or (year % 4 == 0 and year % 100 != 0):
    result = "Năm nhuận"

print(result)
