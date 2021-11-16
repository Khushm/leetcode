// Contains Duplicate

#include <iostream>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> s;
        int a;
        for(int i=0; i<nums.size(); i++){
            a = nums[i];
            if(s.count(a)){
                return true;
            }
            s.insert(a);
        }
        return false;
    }
};
