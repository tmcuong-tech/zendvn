sentence = "lap trinh php tai zendvn la chuong trinh"
searchWord = "tri"

result = -1
arrSentence = sentence.split(" ")

for i in range(len(arrSentence)):
    if searchWord in arrSentence[i]:
        result = i + 1
        break

print(result)
