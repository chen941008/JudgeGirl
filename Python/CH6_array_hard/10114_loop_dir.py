length_dir={}
def cycle_length(n):
    original_n = n 
    sum=1
    while(n!=1):
        if(n in length_dir):
            sum+=length_dir[n]-1
            break
        if(n%2==0):
            n//=2
        else:
            n=n*3+1
        sum+=1
    length_dir[original_n] = sum
    return sum
for i in range(int(input())):
    max_cycle_length=0
    lower_bound, upper_bound = map(int, input().split())
    for j in range(lower_bound,upper_bound+1):
        max_cycle_length=max(max_cycle_length,cycle_length(j))
    print(f"{max_cycle_length}")