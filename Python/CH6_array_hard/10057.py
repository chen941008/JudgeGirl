matrix = []
for _ in range(2):
    row = list(map(int, input().split()))
    matrix.append(row)
transposed = list(zip(*matrix))
for row in transposed:
    print(' '.join(map(str, row)))
