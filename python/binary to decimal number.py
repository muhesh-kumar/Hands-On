# decimal to binary:

s = ""
n = int(input())
while n > 0:
    s += str(n % 2)
    n /= 2
print(s[-1:])