inputCategory = "D1|Lập trình web$D2|Lập trình phần mềm$D3|Lập trình di động"
inputCourse = "1|HTML CSS|D1=2|PHP|D1=3|Laravel|D1=4|Winform|D2=5|NodeJS|D2=6|React Native|D3"

inputCategory = inputCategory.replace("$", "|")
inputCourse = inputCourse.replace("=", "|")

arrInputCategory = inputCategory.split("|")
arrInputCourse = inputCourse.split("|")

result = ""
index = 1

for i in range(1, len(arrInputCategory), 2):
    categoryID = arrInputCategory[i - 1]
    categoryName = arrInputCategory[i]
    record = f"{str(index)}. {categoryName}"
    count = 0
    listCourse = ""

    for j in range(1, len(arrInputCourse), 3):
        if arrInputCourse[j + 1] == categoryID:
            count += 1
            listCourse += arrInputCourse[j] + ", "

    listCourse = listCourse[0:len(listCourse) - 2]
    record += f"({count}): {listCourse}"
    result += f"{record} \n"
    index += 1

print(result)
