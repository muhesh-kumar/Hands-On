# getting mutiple space separated values as input in the same line:
# a, b, c, d = input("input: ").split()
# print(a,b, c, d)


# if we have many conditions and we need to satisfy all, 

a = 5
b = 6
c = 7

conditions = [
    a > 4, 
    b > 5,
    c > 6
]

if all(conditions):
    print("All Satisfied")

# if we want to perform or operation, 

if any(conditions):
    print("Any conditions")


# to swap two values

print("Initially:", a, b)
a, b = b, a

print("After swapping:", a, b)

# to remove duplicates from a list

a = [1, 2, 2, 2, 2,2, 4, 5, 3,2, 2, 9, 8, 8, 4, 6]
print(a)
a = list(set(a))
print(a)


# to find the most repeating duplicate:

most = max(set(a), key = a.count)
print(most)

# also use comprehensions to get your work done in few lines of code

# to get variable number of arguments:
def dprint(*a):
    for i in a:
        print(i)

dprint(1, 2, 3, 4, 5, 5) 


# to reverse an iterable:

collection_type = 'hello world!'
rev = collection_type[::-1]
print(rev)