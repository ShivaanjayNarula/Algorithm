function allMaxSubarrays(nums) {
    let maxEndingHere = nums[0];
    let maxSoFar = nums[0];
    let start = 0;
    let result = [[nums[0]]];

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] > maxEndingHere + nums[i]) {
            maxEndingHere = nums[i];
            start = i;
        } else {
            maxEndingHere += nums[i];
        }

        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
            result = [nums.slice(start, i + 1)];
        } else if (maxEndingHere === maxSoFar) {
            result.push(nums.slice(start, i + 1));
        }
    }

    return { maxSum: maxSoFar, subarrays: result };
}

// Example usage
const arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4];
const result = allMaxSubarrays(arr);

console.log("Max Sum:", result.maxSum);
console.log("All Max Subarrays:");
result.subarrays.forEach(sub => console.log(sub));
