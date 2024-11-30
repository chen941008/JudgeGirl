import math
for i in range(int(input())):
    if(i % 2 == 0):
        print(f"1", end="")
    print(f"01"*math.ceil(i/2))