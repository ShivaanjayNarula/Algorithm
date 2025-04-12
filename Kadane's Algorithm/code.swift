import Foundation

func allMaxSubarrays(_ nums: [Int]) -> (maxSum: Int, subarrays: [[Int]]) {
    var maxEndingHere = nums[0]
    var maxSoFar = nums[0]
    var start = 0
    var result = [[nums[0]]]

    for i in 1..<nums.count {
        if nums[i] > maxEndingHere + nums[i] {
            maxEndingHere = nums[i]
            start = i
        } else {
            maxEndingHere += nums[i]
        }

        if maxEndingHere > maxSoFar {
            maxSoFar = maxEndingHere
            result = [Array(nums[start...i])]
        } else if maxEndingHere == maxSoFar {
            result.append(Array(nums[start...i]))
        }
    }

    return (maxSoFar, result)
}

// Example usage
let arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
let result = allMaxSubarrays(arr)

print("Max Sum:", result.maxSum)
print("All Max Subarrays:")
for sub in result.subarrays {
    print(sub)
}
