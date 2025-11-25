SALARY_PER_HOUR = 20
PRICE_REVIEW_LEVEL_ONE = 1
PRICE_REVIEW_LEVEL_TWO = 2
PRICE_REVIEW_LEVEL_THREE = 5

totalLine = 50
timeDoing = 4
priceReview = PRICE_REVIEW_LEVEL_THREE

if totalLine < 10:
    priceReview = PRICE_REVIEW_LEVEL_ONE
elif totalLine < 20:
    priceReview = PRICE_REVIEW_LEVEL_TWO

result = timeDoing * SALARY_PER_HOUR - priceReview

print(f"Salary: {result}$")
