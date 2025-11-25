number = 5

result = "Số nguyên tố"
index = 2

while index < number:
    if number % index == 0:
        result = "Không là số nguyên tố"
        break
    index += 1

print(result)
