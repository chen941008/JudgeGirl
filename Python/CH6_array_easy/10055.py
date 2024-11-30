numbers=[]
try:
    while True:
        numbers += list(map(int, input().split()))
except EOFError:
    pass
print(sum(numbers))