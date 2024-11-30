from collections import Counter
stone_count = Counter(map(int, input().split()))
for key,value in stone_count.items():
    if(value%3==2):
        print(f"{key}")
        break