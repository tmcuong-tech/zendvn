inputName = "abw=java;def=android;nfv=php;"
inputTime = "abw=9920;nfv=240;def=1990;"

inputName = inputName.replace(";", "=")
inputTime = inputTime.replace(";", "=")

arrInputName = inputName.split("=")
arrInputTime = inputTime.split("=")

courseTime = 0
indexFind = 1
courseID = ""
courseName = ""

for i in range(1, len(arrInputTime), 2):
    currentTime = int(arrInputTime[i])
    if currentTime > courseTime:
        courseTime = currentTime
        indexFind = i

courseID = arrInputTime[indexFind - 1]

for i in range(0, len(arrInputName), 2):
    if courseID == arrInputName[i]:
        courseName = arrInputName[i + 1]
        break

print(f"Course Id: {courseID} - Course Name: {courseName} - Course Time: {courseTime}")
