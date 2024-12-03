a_list=list(map(int,input().split()))
b_list=list(map(int,input().split()))
intersection=sorted(list(set(a_list)&set(b_list)))
print(*intersection)