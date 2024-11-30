size=int(input())
for i in range(size):
    if(i == 0 or i == size-1):
        print(f"{'*'*size}")
    else:
        print(f"*{' '*(size-2)}*")