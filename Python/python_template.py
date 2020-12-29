def bubble_sort(lis):
    for i in range(len(lis)):
        for j in range(i+1, len(lis)):
            if lis[i] > lis[j]:
                lis[i], lis[j] = lis[j], lis[i]
    return lis

# print(bubble_sort([1,1,1,1,1,5,9,6]))

def selection_sort(lis):
    for i in range(len(lis)):
        mn_indx = i
        for j in range(i+1, len(lis)):
            if lis[j] < lis[mn_indx]:
                mn_indx = j 
        lis[i], lis[mn_indx] = lis[mn_indx], lis[i]
    return lis

print(selection_sort([1, 1, 8, 3]))

# def insertion_sort(lis):
#     for i in range(1, len(lis)):
#         key = lis[i]
#         j = i - 1
#         while j >= 0 and key < lis[j]:
#             lis[j + 1] = lis[j]
#             j -= 1
#         lis[j + 1] = key
#     return lis

def insertion_sort(lis):
    for i in range(1, len(lis)):
        value = lis[i]
        hole = i
        while (hole > 0 and lis[hole - 1] > value):
            lis[hole] = lis[hole - 1]
            hole -= 1
        lis[hole] = value
    
    return lis
    
# print(insertion_sort([9, 8, 7, 6, 5, 4, 3, 2, 1]))

# print(insertion_sort([7, 6, 5, 4]))

def linear_search(lis, val):
    for i in range(len(lis)):
        if lis[i] == val:
            return i
    return -1

# print(linear_search([1, 2, 3, 4, 5, 6], 4))

# returns the 0 based index of the value in the lis. If the value is not found in the lis, it returns -1
def binary_search(lis, val):
    l = 0
    r = len(lis) - 1
    while l <= r:
        mid = l + (r - l)//2
        if lis[mid] < val:
            l = mid + 1
        elif lis[mid] > val:
            r = mid - 1
        else: 
            return mid
    return -1

# print(binary_search([35, 38, 101, 897, 999, 1000], 38))

