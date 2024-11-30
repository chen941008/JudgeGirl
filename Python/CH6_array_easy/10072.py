from collections import Counter
n=int(input())
numbers_count = Counter(map(int, input().split()))
result=[key for key,value in numbers_count.items() if value==1]
print(' '.join(map(str,result)))