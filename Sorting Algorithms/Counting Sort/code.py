def counting_sort(arr):
    if not arr:
        return arr

    max_val = max(arr)
    count = [0] * (max_val + 1)

    for num in arr:
        count[num] += 1

    output = []
    for i, c in enumerate(count):
        output.extend([i] * c)

    return output

arr = [4, 2, 2, 8, 3, 3, 1]
print(counting_sort(arr))
