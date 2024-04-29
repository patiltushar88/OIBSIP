def insertionSort(arr):
    for i in range(1, len(arr)):
        val = arr[i]
        j = i - 1
        while j >= 0 and val < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = val




myArr = [2, 4, 6, 8, 1, 3, 4, 7]
insertionSort(myArr)
for n in myArr:
    print(n, end=', ')
