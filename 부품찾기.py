def binary_search(array, start, end, target):
    if start > end:
        return None

    mid = (start + end) // 2

    if array[mid] == target:
        return mid
    elif array[mid] > target:
        return binary_search(array, start, mid - 1, target)
    else:
        return binary_search(array, mid + 1, end, target)


n = 5
target = [5, 7, 9]
store = [8, 3, 7, 9, 2]

for i in target:
    result = binary_search(store, 0, n-1, i)
    if result:
        print("yes", end=' ')
    else:
        print("no", end=' ')
