class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        for (const string& s : strs) {
            string sortedStr=s;
            sort(sortedStr.begin(), sortedStr.end());
            anagramMap[sortedStr].push_back(s);
        }
        vector<vector<string>> res;
        for (auto& pair : anagramMap) {
            res.push_back(move(pair.second));
        }
        
        return res;
        
    }
};
