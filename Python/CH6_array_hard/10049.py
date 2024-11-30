numbers=[]
length=int(input())
for i in range(length):
    numbers.append(int(input()))
numbers=sorted(numbers)
for number in numbers:
    print(number)
print(f"{sum(numbers)} {(sum(numbers))/len(numbers):.3f}")