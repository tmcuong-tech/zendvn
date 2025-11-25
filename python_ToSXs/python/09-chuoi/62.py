str = "abc7"

check = "false"

for c in str:
    if c.isdigit():
        check = "true"
        break

print(check)
