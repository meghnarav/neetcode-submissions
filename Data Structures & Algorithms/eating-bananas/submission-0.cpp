class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(); 
        sort(piles.begin(),piles.end());
        int low=1, high=piles[n-1]; int res;

        while(low<=high){
            int mid=(low+high)/2;
            long long total=0;
            for(int p:piles) {
                total+=(p+mid-1)/mid;
            }
            if(total >h){
                low=mid+1;
            } else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
    }
};
