str = "php/12/typescript/1992/jquery/190/angular/220"

strArr = str.split("/")
indexFindTime = 1
maxTime = int(strArr[indexFindTime])

for i in range(3, len(strArr), 2):
    time = int(strArr[i])
    if time > maxTime:
        maxTime = time
        indexFindTime = i

print(f"{strArr[indexFindTime - 1]}: {maxTime}")
