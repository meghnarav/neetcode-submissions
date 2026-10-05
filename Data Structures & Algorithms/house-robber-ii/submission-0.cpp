class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int prev2=0, prev1=0;
        for(int i=0; i<n-1; i++){
            int temp=prev1;
            prev1=max(prev1, prev2+nums[i]);
            prev2=temp;
        }

        int prev3=0, prev4=0;
        for(int i=1; i<n; i++){
            int temp=prev3;
            prev3=max(prev3, prev4+nums[i]);
            prev4=temp;
        }

        return max(prev1, prev3);
    }
};