phone = "0928053838"

result = "No"
phone = phone.replace(".", "")

length = len(phone)
tmp = int(phone[length - 2:])
if tmp == 38 or tmp == 78:
    result = "Yes"

print(result)
