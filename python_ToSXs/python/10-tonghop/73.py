id = "69"
str = "69,  1,   69 , 169 "

str = str.strip()
str = str.replace(" ", "")
arrId = str.split(",")
count = 0

for elm in arrId:
    if elm == id:
        count += 1

print(f"ID {id} xuất hiện {count} lần")
