class Solution {
    public int majorityElement(int[] nums) {
        int candi = nums[0];
        int count=0;

        for(int num:nums){
            if(count==0) candi=num;
            count+=(num==candi)?1:-1;
        }
        return candi;
    }
}