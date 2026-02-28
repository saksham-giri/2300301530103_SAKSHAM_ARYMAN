// 34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> ans={-1,-1};
    

    int s=0,e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans[0]=mid;
            e=mid-1;
        }
        else if(arr[mid]>target) e=mid-1;
        else s=mid+1;
    } 

    s=0,e=arr.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            ans[1]=mid;
            s=mid+1;
        }
        else if(arr[mid]>target) e=mid-1;
        else s=mid+1;
    } 

    return ans;

    }
};