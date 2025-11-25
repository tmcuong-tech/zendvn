input = "Hue/2,3,4#Linh/5,3#Duy/5,36"

arrInput = input.split("#")
result = ""

for elm in arrInput:
    arrInfo = elm.split("/")
    arrScoreString = arrInfo[1].split(",")
    arrScore = list(map(int, arrScoreString))
    maxScore = max(arrScore)
    result += f"{arrInfo[0]}: {maxScore} \n"

print(result)
