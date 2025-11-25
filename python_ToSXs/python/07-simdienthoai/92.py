phone = "08.33333.494"

phone = phone.replace(".", "")
result = "No"

for i in range(1, len(phone) - 4):
    if (phone[i] == phone[i + 1] and
            phone[i] == phone[i + 2] and
            phone[i] == phone[i + 3] and
            phone[i] == phone[i + 4]):
        result = "Yes"
        break

print(result)
