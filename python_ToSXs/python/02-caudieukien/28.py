BONUS_LEVEL_ONE = 0.05
BONUS_LEVEL_TWO = 0.1
BONUS_LEVEL_THREE = 0.2

totalSale = 90
incentive = BONUS_LEVEL_THREE

if totalSale <= 100:
    incentive = BONUS_LEVEL_ONE
elif totalSale <= 300:
    incentive = BONUS_LEVEL_TWO

commission = totalSale * incentive
print(f"Hoa hồng: {commission}")
