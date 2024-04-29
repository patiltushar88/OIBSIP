def helper(arr, low, high):
    pivot_index = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= pivot_index:
            i = i + 1
            arr[j], arr[i] = arr[i], arr[j]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

def quickSort(arr, low, high):
    if low < high:
        pi = helper(arr, low, high)
        quickSort(arr, low, pi - 1)
        quickSort(arr, pi + 1, high)

arr = [5, 7, 6, 9, 4, 8, 1, 2, 3]
n = len(arr)
quickSort(arr, 0, n - 1)
for i in arr:
    print(i, end=', ')
