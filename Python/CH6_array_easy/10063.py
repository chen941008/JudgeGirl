numbers=[]
try:
    while True:
        numbers += list(map(int, input().split()))
except EOFError:
    pass
full_array = list(range(min(numbers), max(numbers) + 1))
missing_numbers = list(set(full_array) - set(numbers))
print(' '.join(map(str,missing_numbers)))