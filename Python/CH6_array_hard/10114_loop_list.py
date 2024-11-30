MAX_N = 1000000  # 假設這是你的最大範圍
cycle_lengths = [-1] * (MAX_N + 1)  # 初始化一個長度為 MAX_N + 1 的 list，預設值為 -1

def cycle_length(n):
    original_n = n
    steps = 1
    
    while n != 1:
        if n <= MAX_N and cycle_lengths[n] != -1: 
            steps += cycle_lengths[n]-1
            break
        if n % 2 == 0:
            n //= 2
        else:
            n = 3 * n + 1
        steps += 1
    
    cycle_lengths[original_n] = steps 
    return steps

for _ in range(int(input())):
    max_cycle_length = 0
    lower_bound, upper_bound = map(int, input().split())
    for j in range(lower_bound, upper_bound + 1):
        max_cycle_length = max(max_cycle_length, cycle_length(j))
    print(f"{max_cycle_length}")
