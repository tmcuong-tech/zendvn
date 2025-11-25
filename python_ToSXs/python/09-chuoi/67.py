str = "HaI Lan"

result = ""

for elm in str:
    character = elm.lower() if elm.isupper() else elm.upper()
    result += character

print(result)
