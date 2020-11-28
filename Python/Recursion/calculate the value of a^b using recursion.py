def pow(a, b):
    if b == 0: return 1
    elif b == 1: return a
    else:
        return a*pow(a, b - 1)


print(pow(2, 10))