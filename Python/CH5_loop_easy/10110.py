ans=int(input())
lower_bound=1
upper_bound=100
while(1):
    while(1):
        print(f"{lower_bound} < ? < {upper_bound}")
        guess=int(input())
        if(guess<=lower_bound or guess>=upper_bound):
            print(f"out of range")
        else:
            break
    if(guess==ans):
        print(f"bingo answer is {ans}")
        break
    elif(guess<ans):
        lower_bound=guess
        print(f"wrong answer, guess larger")
    else:
        upper_bound=guess
        print(f"wrong answer, guess smaller")