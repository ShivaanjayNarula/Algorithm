def moose_algorithm(arr):
    n = len(arr)
    dp = [float('inf')] * n
    dp[0] = arr[0]
    
    for i in range(1, n):
        for j in range(i - 1, -1, -1):
            dp[i] = min(dp[i], min(arr[i], dp[j]))
    
    return dp

arr = [4, 2, 7, 1, 3, 8, 5]
result = moose_algorithm(arr)
print(" ".join(map(str, result)))
