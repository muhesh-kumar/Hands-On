a = [4, 6, 8]
b= [6, 4, 8]
alice = 0
bob = 0
for i in range(len(a)):
    if a[i] > b[i]:
        alice += 1
    elif b[i] > a[i]:
        bob += 1
print("Alice's Points:", alice)
print("Bob's Points:", bob)