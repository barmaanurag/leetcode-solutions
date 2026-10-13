class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        bool flag = false;
        while(i<=j){
            int m = (j-i)/2 + i;
            if(nums[m]==target) return m;

            else if(nums[m]<target){
                i=m+1;
            }
            else j=m-1;
        }
        return i;

    }
};