character = 'p'

result = "Không là nguyên âm"

match character:
    case 'a' | 'e' | 'i' | 'o' | 'u' | 'A' | 'E' | 'I' | 'O' | 'U':
        result = "Nguyên âm"

print(result)
