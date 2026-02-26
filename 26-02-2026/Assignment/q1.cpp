#floorInASortedArray

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int left=0,right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]>x) right=mid-1;
            else left=mid+1;
        }
        return right;
    }
};
