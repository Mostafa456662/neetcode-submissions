class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> num;
        set<int> s;
        vector<pair<int,int>> res;
        vector<int> final_res;
        for(int i = 0; i<nums.size(); i++){
            s.insert(nums[i]);
            num[nums[i]]++;
        }   
        for(int i:s){
            res.push_back({num[i],i});
        }     
        sort(res.begin(), res.end());
        for(int i = (int)res.size()-1;i>=(int)res.size()-k;i--){
            final_res.push_back(res[i].second);
        }
    return final_res;
    }
};
