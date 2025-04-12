def all_max_subarrays(nums):
    max_ending_here = nums[0]
    max_so_far = nums[0]
    start = 0
    result = [[nums[0]]]

    for i in range(1, len(nums)):
        if nums[i] > max_ending_here + nums[i]:
            max_ending_here = nums[i]
            start = i
        else:
            max_ending_here += nums[i]

        if max_ending_here > max_so_far:
            max_so_far = max_ending_here
            result = [nums[start:i+1]]
        elif max_ending_here == max_so_far:
            result.append(nums[start:i+1])

    return max_so_far, result

# Example usage
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
max_sum, subarrays = all_max_subarrays(arr)

print("Max Sum:", max_sum)
print("All Max Subarrays:")
for sub in subarrays:
    print(sub)
