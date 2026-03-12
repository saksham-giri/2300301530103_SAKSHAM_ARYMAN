//643. Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currSum=0,maxSum=INT_MIN;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<k;i++){
            currSum+=nums[i];
        }
        
        maxSum=max(currSum,maxSum);

        for(int i=k;i<nums.size();i++){
            
            currSum-=nums[i-k];
            currSum+=nums[i];
            
            maxSum=max(currSum,maxSum);
        }
        return maxSum/k;
        
    }
};