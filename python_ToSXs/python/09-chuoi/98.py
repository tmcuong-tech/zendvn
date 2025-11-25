str = "abw-9920_nfv-240_def-1990"
delimiter = ['-', '_']

result = []
word = ""

for elm in str:
    if elm in delimiter:
        result.append(word)
        word = ""
    else:
        word += elm

result.append(word)

print(f"result: {result}")
