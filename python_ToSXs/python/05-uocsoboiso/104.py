x = 27
y = 18

result = 0
zmin = min(x, y)

for i in range(zmin, 0, -1):
    if x % i == 0 and y % i == 0:
        result = i
        break

print(f"UCLN của {x} và {y} là {result}")
