#include<bits/stdc++.h>
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area=0, i=0, j=heights.size()-1;
        while(j>i){
            area=max(min(heights[i], heights[j])*(j-i), area);
            if(heights[i]<heights[j]) i++;
            else
                j--;
        }
        return area;
    }
};
