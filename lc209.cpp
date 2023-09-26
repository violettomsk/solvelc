class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0;
        int end = 0;
        int min = -1;
        int sum = 0;
        while (end < nums.size()) {
            sum = sum + nums[end];
            end++;

            while (start <= end && sum >= target) {
                if (min == -1 || min > end-start) {
                    min = end - start;
                }
                sum -= nums[start];
                start++;
            }
        }
        
        if (min == -1) return 0;
        return min;
    }
};
