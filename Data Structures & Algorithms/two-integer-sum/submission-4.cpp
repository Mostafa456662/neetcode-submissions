class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> original_nums(nums.size());
        for(int i = 0; i<nums.size(); i++){
            original_nums[i] = nums[i];
        }
        sort(nums.begin(), nums.end());
        unordered_map<int,int> indices;
        int l = 0, r = nums.size()-1;
        while(true){
            if (nums[l]+nums[r]>target){
                r-=1;
            }
            else if (nums[l]+nums[r]<target){
                l+=1;
            }
            else{
                int first;
                int second;
                for(int i = 0; i<nums.size(); i++){
                    if(original_nums[i]==nums[l]){
                        first = i;
                        break;
                    }
                }
                for(int i = 0; i<nums.size(); i++){
                    if(original_nums[i]==nums[r]&&i!=first){
                        second = i;
                    }
                }
                return {min(first,second),max(first, second)};
            }
        }
    }
};
