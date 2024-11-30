numbers = list(map(int, input().split()))
k=int(input())
modify_numbers=[x for x in numbers if x<=k]
print(' '.join(map(str,modify_numbers)))