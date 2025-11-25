phone = "076.7777775"

phone = phone.replace(".", "")
result = "No"

for i in range(1, len(phone) - 5):
    if ((phone[i] == phone[i + 1]) and
            phone[i] == phone[i + 2] and
            phone[i] == phone[i + 3] and
            phone[i] == phone[i + 4] and
            phone[i] == phone[i + 5]):
        result = "Yes"
        break

print(result)
