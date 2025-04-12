import java.util.*;

public class AllMaxSubarrays {

    public static List<List<Integer>> findAllMaxSubarrays(int[] nums) {
        int maxEndingHere = nums[0];
        int maxSoFar = nums[0];
        int start = 0;

        List<List<Integer>> result = new ArrayList<>();
        result.add(new ArrayList<>(Arrays.asList(nums[0])));

        for (int i = 1; i < nums.length; i++) {
            if (nums[i] > maxEndingHere + nums[i]) {
                maxEndingHere = nums[i];
                start = i;
            } else {
                maxEndingHere += nums[i];
            }

            if (maxEndingHere > maxSoFar) {
                maxSoFar = maxEndingHere;
                result.clear();
                result.add(new ArrayList<>());
                for (int j = start; j <= i; j++)
                    result.get(0).add(nums[j]);
            } else if (maxEndingHere == maxSoFar) {
                List<Integer> subarray = new ArrayList<>();
                for (int j = start; j <= i; j++)
                    subarray.add(nums[j]);
                result.add(subarray);
            }
        }

        return result;
    }

    public static void main(String[] args) {
        int[] arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
        List<List<Integer>> maxSubarrays = findAllMaxSubarrays(arr);

        System.out.println("All Max Subarrays:");
        for (List<Integer> sub : maxSubarrays) {
            System.out.println(sub);
        }
    }
}
