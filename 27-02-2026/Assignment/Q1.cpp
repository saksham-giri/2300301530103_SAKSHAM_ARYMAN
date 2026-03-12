//search a 2d matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0,right=matrix.size()-1,row;
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(target<=matrix[mid][matrix[0].size()-1] && target>=matrix[mid][0]){
                row=mid;
                break;
            }
            else if(target>matrix[mid][matrix[0].size()-1]) left=mid+1;
            else right=mid-1;
        }
        left=0,right=matrix[0].size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target==matrix[row][mid]) return true;
            else if(target>matrix[row][mid]) left=mid+1;
            else right=mid-1;

        }
        return false;

    }
};