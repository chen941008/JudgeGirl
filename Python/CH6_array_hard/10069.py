new_list=[]
for _ in range(int(input())):
    new_list.append(int(input()))
new_tuple=tuple(sorted(new_list,reverse=True))
print(new_tuple)