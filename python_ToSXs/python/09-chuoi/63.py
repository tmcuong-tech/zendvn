str = " luu truong   hai    lan"

count = 0
str = str.strip()
space = True

for elm in str:
    if elm == ' ':
        space = True
        continue

    if space:
        count += 1
        space = False

print(count)
