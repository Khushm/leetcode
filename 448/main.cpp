// Find All Numbers Disappeared in an Array
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        if(nums.size() == 0) return v;
        unordered_map<int,int> m;
        for(int i=1; i<=nums.size();i++) m[i] = 0;
        for(auto &i: nums) m[i]++;
        for(auto &j: m)
            if(j.second == 0)
                v.push_back(j.first);
        return v;
    }
};
