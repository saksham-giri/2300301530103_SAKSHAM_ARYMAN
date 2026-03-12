
//209. Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, n = nums.size(), currSum = 0, minLen = INT_MAX;
        for (int r = 0; r < n; r++) {
            currSum += nums[r];
            if (currSum >= target) {

                while (currSum >= target) {
                    minLen = min(r - l + 1, minLen);
                    currSum -= nums[l];
                    l++;
                }
            }
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};