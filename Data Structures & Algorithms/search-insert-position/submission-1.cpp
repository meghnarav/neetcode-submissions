class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(), low=0, high=n;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target){ //search for first num>=target
                low=mid+1; //search to right
            } else high=mid; //search to left
            
        } return low;
    }
};