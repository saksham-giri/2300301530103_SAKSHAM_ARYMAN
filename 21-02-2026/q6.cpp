// 977. Squares of a Sorted Array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1,i=nums.size()-1;
        vector<int> ans(nums.size());
        while(i>=0){
            if(abs(nums[l])>abs(nums[r])){
                ans[i]=nums[l]*nums[l];
                l++;
            }
            else{
                ans[i]=nums[r]*nums[r];
                r--;
            }
            i--;
        }
        return ans;
        
    }
};