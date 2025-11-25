phone = "0928053839"

result = "No"
phone = phone.replace(".", "")

length = len(phone)
tmp = int(phone[length - 2:])
if tmp == 39 or tmp == 79:
    result = "Yes"

print(result)
