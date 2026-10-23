class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        set<string> keys;
        unordered_map<string,vector<string>> lists;
        vector<vector<string>> res;
        for(int i = 0; i<strs.size(); i++){
            string curr = strs[i];
            sort(curr.begin(), curr.end());
            lists[curr].push_back(strs[i]);
            keys.insert(curr);
        }
        for(string s:keys){
            res.push_back(lists[s]);
        }
        return res;
    }
};
