class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int num =0; int prev=0;
        for(int n : nums){
            if(n==1) { 
                num++;
                prev=Math.max(num,prev);
            }
            else if(n==0) {
                num=0;
            }
        }
        return prev;
    }
}