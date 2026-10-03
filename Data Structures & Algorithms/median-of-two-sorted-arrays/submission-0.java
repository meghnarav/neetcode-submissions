class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m=nums1.length; int n=nums2.length;
        int r=m+n;
        int arr[]=new int[r];

        int i=0, j=0, k=0;
        while(i<m && j<n){
                if(nums1[i]<nums2[j]){
                    arr[k++]=nums1[i++];
                } else {
                    arr[k++]=nums2[j++];
                }
        }
      
        while (i<m) {
            arr[k++]=nums1[i++];
        }

        while (j<n) {
            arr[k++]=nums2[j++];
        }

        if(r%2!=0){
            return arr[r/2];
        } 
        else{
            return (arr[r/2]+arr[(r/2)-1])/2.0;
        }
    }
}