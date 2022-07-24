# conditions:
# you are allowed to move right and down
# You have to reach the cell (n, m) from (1, 1)

def paths(n, m):
    if n == 1 or m == 1: return 1
    else:
        return paths(n - 1, m) + paths(m - 1, n)

print(paths(4, 4))