def ffill(matrix, r, c, prev_fill, new_fill):
    rows = len(matrix[0])
    cols = len(matrix[0])
    
    if r >= rows or c >= cols or r < 0 or c < 0:
        return
    if matrix[r][c] != prev_fill:
        return 

    matrix[r][c] = new_fill

    ffill(matrix, r - 1, c, prev_fill, new_fill)
    ffill(matrix, r, c - 1 ,prev_fill, new_fill)
    ffill(matrix, r + 1, c, prev_fill, new_fill)
    ffill(matrix, r, c + 1, prev_fill, new_fill)

    for i in matrix:
        print(*i)


matrix = [
    [1, 1, 1, 2, 1, 1, 1],
    [2, 2, 1, 2, 2, 1, 1],
    [0, 2, 2, 2, 1, 1, 1],
    [1, 1, 0, 2, 1, 2, 2],
    [1, 1, 2, 2, 1, 0, 0]
]

for i in matrix:
    print(*i)

print("----------------------")
ffill(matrix, 0, 3, 2, 3)
