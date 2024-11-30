num = 0  
try:
    while True:
        numbers = (input().split())
        for number in numbers:
            num = num ^ int(number)
except EOFError:
    pass  
print(num) 
