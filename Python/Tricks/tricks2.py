# instead of writing if and else:

condition = True

x = 1 if condition else 0
print(x)

print("Yes") if condition else print("No")

# using enumerate function for clean code
ns = ['apple', 'mango', 'grapes', 'guava']
for i, j in enumerate(ns, start=10):
    print(i, j)

# to loop over two(for more than two lists as well) lists: we need to use -> zip()
names = ['jim', 'tom', 'john', 'tim']
ages = [18, 19, 34, 23]
for n, name in zip(ns, names):
    print(n, name)

for n, name, age in zip(ns, names, ages):
    print(n, name, age)

# this method is good for lists of same length, so if we use zip with different length lists,
# it will stop with the list of the shortest length. So, if we want it to end with the longest list
# size, we have to use ziplong function from the itertools library

# here zip just returns a tuple of the items passed into it..and we are just unpacing it 
# by saying for i, j, k in zip(lis1, lis2, lis3):
# we can also just access the tuple it returns as follows

for val in zip(ns, names, ages):
    print(val)


# unpacking: (while unpacking len of LHS == len of RHS)
a, b = (1, 2)

# but we can use a trick like this
a, b, *c = (1, 2, 3, 4, 5)
print(a, b, c)

e, f, *g, h = (1, 2, 3, 4, 5)
print(e, f, g, h)

# if we dont want to use more variables, we can use an underscore like follows
k, l, *_, m = (1, 2, 3, 4, 5, 7)
print(k, l, m) 


# use fstrings, rstrings for formatting