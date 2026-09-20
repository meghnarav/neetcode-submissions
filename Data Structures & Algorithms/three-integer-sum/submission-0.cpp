class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); int n=nums.size();
        vector<vector<int>> arr;
        for(int i=0; i<nums.size()-2; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            } 
            int left =i+1, right = nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    arr.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum>0){
                    right--;
                } else left++;
            }
        }
        return arr;
    }
};
