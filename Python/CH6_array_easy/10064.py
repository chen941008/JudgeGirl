from collections import Counter
num_count = Counter(map(int, input().split()))
result=[key for key,value in num_count.items() if value >=2]
result=sorted(result)
print(' '.join(map(str, result)))