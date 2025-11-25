str = "a-b-d-ddc"
delimiter = '-'

result = []
word = ""

for elm in str:
    if elm == delimiter:
        result.append(word)
        word = ""
    else:
        word += elm

result.append(word)

print(f"result: {result}")
