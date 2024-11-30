from functools import lru_cache

@lru_cache(maxsize=None)  
def cycle_length(n):
    if n == 1:
        return 1
    if n % 2 == 0:
        return 1 + cycle_length(n // 2)
    else:
        return 1 + cycle_length(3 * n + 1)
for _ in range(int(input())):
    max_cycle_length = 0
    lower_bound, upper_bound = map(int, input().split())
    for j in range(lower_bound, upper_bound + 1):
        max_cycle_length = max(max_cycle_length, cycle_length(j))
    print(f"{max_cycle_length}")