def binary_search(array, start, end, target):
    if start > end:
        return None

    mid = (start + end) // 2
    result = 0

    for i in array[:mid]:
        result += i - array[mid]

    if result == target:
        return mid
    elif result > target:
        return binary_search(array, start, mid - 1, target)
    else:
        return binary_search(array, mid + 1, end, target)


n, target = 7, 14

array = [19, 15, 10, 17, 20, 14, 18]
rv_array = sorted(array, reverse=True)

result = binary_search(rv_array, 0, n-1, target)

print(rv_array[result])
