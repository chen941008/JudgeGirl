n=int(input())
A=list(map(int,input().split()))
non_zero_elements = [x for x in A if x != 0]
zero_count = A.count(0)
result = non_zero_elements + [0] * zero_count
print(' '.join(map(str,result)))