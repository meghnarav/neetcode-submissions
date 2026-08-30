class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int lcs=1, cur=1;
        for (int i=1;i<nums.size();i++) {
            if (nums[i]==nums[i-1]) {
                continue;
            }
            if (nums[i]==nums[i-1]+1) {
                cur++;
            } 
            else {
                lcs=max(lcs,cur);
                cur=1;
            }
        }
        return max(lcs, cur);
    }
};
