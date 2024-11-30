MAX_N = 1000000  # 假設這是你的最大範圍
cycle_lengths = [-1] * (MAX_N + 1)  # 初始化一個長度為 MAX_N + 1 的 list，預設值為 -1
def cycle_length(n):
    if n <= MAX_N and cycle_lengths[n] != -1: 
        return cycle_lengths[n]
    if n == 1:
        cycle_lengths[n] = 1  
        return 1
    
    if n % 2 == 0:
        next_n = n // 2
    else:
        next_n = 3 * n + 1
    
    
    length = 1 + cycle_length(next_n)
    if(n <= MAX_N):
        cycle_lengths[n] = length 
    return length

for _ in range(int(input())):
    max_cycle_length = 0
    lower_bound, upper_bound = map(int, input().split())
    for j in range(lower_bound, upper_bound + 1):
        max_cycle_length = max(max_cycle_length, cycle_length(j))
    print(f"{max_cycle_length}")