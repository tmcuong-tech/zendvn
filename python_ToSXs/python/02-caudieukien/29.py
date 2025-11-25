numberOne = 6
numberTwo = 3
math = "/"
result = 0
error = ""

match math:
    case "+":
        result = numberOne + numberTwo
    case "-":
        result = numberOne - numberTwo
    case "x":
        result = numberOne * numberTwo
    case "/":
        if numberTwo == 0:
            error = "Không thể chia cho 0"
        else:
            result = numberOne / numberTwo
    case _:
        error = "Không thực hiện được, phép tính không hợp lệ"

if error != "":
    print(error)
else:
    print(f"{numberOne} {math} {numberTwo} = {result}")
