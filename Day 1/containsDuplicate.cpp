class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // initialise the map 
        unordered_map<int,int> mp ;
        // putting values in map
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // traversing and checking the map 
        for(auto x : mp){
            // if the value of the key exceeds the value of 1 it means it occurs more than one time
            if(x.second >1){
                return true;
            }
        }
        return false;
    }
};