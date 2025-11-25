yourNumber = 0

count = 0

while yourNumber > 0:
    yourNumber = int(yourNumber / 10)
    count += 1

print(f"Total: {count} digits")
