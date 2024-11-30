def cycle_length(n):
    sum=1
    while(n!=1):
        if(n%2==0):
            n//=2
        else:
            n=n*3+1
        sum+=1
    return sum
for i in range(int(input())):
    max_cycle_length=0
    lower_bound, upper_bound = map(int, input().split())
    for j in range(lower_bound,upper_bound+1):
        max_cycle_length=max(max_cycle_length,cycle_length(j))
    print(f"{max_cycle_length}")