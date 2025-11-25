import random

start = 14
end = 19

if start > end:
    print("Số bắt đầu phải nhỏ hơn số kết thúc!")
else:
    result = random.randint(start, end)
    print(f"Số ngẫu nhiên: {result}")
