n=int(input())
current_length=1
last=2+(n-2)*3
for i in range(3):
    for j in range(n):
        print(f"{' '*(last-current_length)}{'*'*(current_length*2-1)}")
        current_length+=1
    current_length-=2
    
