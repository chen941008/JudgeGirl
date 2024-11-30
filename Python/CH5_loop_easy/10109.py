n=int(input())
for i in range(n):
    print(f"{' '*(n-1-i)}",end="")
    for j in range(i+1):
        print(f"{j+1}",end="")
    for j in range(i,0,-1):
        print(f"{j}",end="")
    print("")