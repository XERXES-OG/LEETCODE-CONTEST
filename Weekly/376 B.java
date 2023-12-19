import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
class Solution {
    public int[][] divideArray(int[] nums, int k) {
        int n = nums.length;
        if (n % 3 != 0) return new int[0][]; 
        Arrays.sort(nums);

        List<int[]> result = new ArrayList<>();
        for (int i = 0; i < n; i += 3) {
            if (i + 2 < n && nums[i + 2] - nums[i] <= k) {
                result.add(new int[]{nums[i], nums[i + 1], nums[i + 2]});
            } else {
                result.clear(); 
                break; 
            }
        }

        return result.toArray(new int[0][]);

    }
}
