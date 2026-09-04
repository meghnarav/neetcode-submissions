class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size(), i=0, j=n-1;
        vector<int> res;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            } else if(sum<target){
                i++;
            } else j--;
        }

        return res;
    }
};
