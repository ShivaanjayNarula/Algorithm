import java.util.Arrays;

public class MooseAlgorithm {
    public static int[] mooseAlgorithm(int[] arr) {
        int n = arr.length;
        int[] dp = new int[n];
        Arrays.fill(dp, Integer.MAX_VALUE);
        dp[0] = arr[0];
        
        for (int i = 1; i < n; i++) {
            for (int j = i - 1; j >= 0; j--) {
                dp[i] = Math.min(dp[i], Math.min(arr[i], dp[j]));
            }
        }
        
        return dp;
    }
    
    public static void main(String[] args) {
        int[] arr = {4, 2, 7, 1, 3, 8, 5};
        int[] result = mooseAlgorithm(arr);
        
        for (int i : result) {
            System.out.print(i + " ");
        }
        System.out.println();
    }
}
