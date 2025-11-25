x = 5
y = 7

result = 0
zmax = max(x, y)

for i in range(zmax, x * y + 1):
    if i % x == 0 and i % y == 0:
        result = i
        break

print(f"BCNN của {x} và {y} là {result}")
