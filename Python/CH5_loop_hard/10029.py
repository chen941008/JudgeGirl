lower=0
upper=1
n=int(input())
for i in range(n):
    if(i==n-1):
        print(f"{lower}")
    else:
        print(f"{lower}",end=" ")
    lower, upper = upper, lower + upper