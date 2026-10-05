class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev2=0, prev1=0;
        for(int cur:nums){
            int temp=prev1;
            prev1=max(prev1, prev2+cur);
            prev2=temp;
        }
        return prev1;
    }
};