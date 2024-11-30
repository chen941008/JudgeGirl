numbers = list(map(int, input().split()))
num_dict = {i: numbers[i] for i in range(len(numbers))}
result=[key for key,value in num_dict.items() if value==7]
print(' '.join(map(str,result)))