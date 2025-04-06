def bucket_sort(arr):
    n = len(arr)
    if n == 0:
        return arr

    buckets = [[] for _ in range(n)]

    for num in arr:
        index = int(n * num)
        buckets[index].append(num)

    for bucket in buckets:
        bucket.sort()

    output = []
    for bucket in buckets:
        output.extend(bucket)

    return output

arr = [0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434]
print(bucket_sort(arr))
