phone = "0764.555.578"

phone = phone.replace(".", "")
result = "No"

for i in range(1, len(phone) - 3):
    if (phone[i] == phone[i + 1] and
            phone[i] == phone[i + 2] and
            phone[i] == phone[i + 3]):
        result = "Yes"
        break

print(result)
