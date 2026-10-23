class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,bool> exists;
        for(int i = 0; i<n; i++){
            if(exists[nums[i]]){
                return true;
            }
            else{
                exists[nums[i]]=true;
            }
        }
        return false;
    }
};