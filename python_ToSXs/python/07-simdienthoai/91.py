phone = "0917.934.678"

result = "No"
phone = phone.replace(".", "")
length = len(phone)
phone = phone[length - 3:]

first = int(phone[0])
second = int(phone[1])
third = int(phone[2])

if first == second - 1 and first == third - 2:
    result = "Yes"

print(result)
