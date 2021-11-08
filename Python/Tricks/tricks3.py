from functools import reduce

# list manipulation:
# map()

# map allows to pass in a separate function to apply that function to all the values of a list

def square(n):
    return n*n

lis = [x for x in range(10)]
print(lis)
squares = list(map(square, lis))
print(squares)


# filter()
# it allwos us to filter out certain elements from our list
# we need to pass a boolean function as the first argument:

def even(n):
    return n % 2 == 0

eves = list(filter(even, lis))
print(eves)

# reduce()

def prod(x, y): return x*y
prods = reduce(prod, lis)
print(prods)

# lambda functions:

squares = list(map(lambda x: x**2, lis))
print(squares)