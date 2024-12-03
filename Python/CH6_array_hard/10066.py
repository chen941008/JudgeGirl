input_list=list(map(int,input().split()))
average=round(sum(input_list)/len(input_list))
small_list=[x for x in input_list if x<average]
big_list=[x for x in input_list if x>=average]
print(' '.join(map(str,small_list)))
print(' '.join(map(str,big_list)))