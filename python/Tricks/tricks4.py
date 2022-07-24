# import this
# import __hello__
# import antigravity
# fstrings

name = "Muhesh"
age = 18
print("Hello my name is", name, "and I am", age, " years old")
print("Hello my name is", name, "and I am", age, " years old")

# we can do the above task as follows:

print(f"Hello my name is {name} {age + 10}")

# anonymous variable _
# it is just a place holder, like we can't acces it and it doesn't get assigned to...
print([_ for _ in range(10)])

# join() - to join a list of values as a string with formatting...
dates = ["4", "10", "2002"]

print("-".join(dates))


# lambdas
x = [(1, 2), (3, 4), (5, 7)]
print(max(x, key=lambda y: y[1]))


# to print elements of an iterable separated by spaces:
x = [1, 2, 3, 4]
print(*x)


# for else:

for _ in range(10):
    if _ == 9:
        break
    else: print(_)
else: print("yes")

# == vs is vs __eq__
x = [1, 2]
y = [1, 2]
print(x == y)
print(x is y) # is does object comparison.
x = y
print(x is y)