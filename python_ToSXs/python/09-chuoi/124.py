str = "dksds!03@#8330#@8983hndh!@"

result = ""

for elm in str:
    if elm.isdigit():
        result += elm

print(result)
