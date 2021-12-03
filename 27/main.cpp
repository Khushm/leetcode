// Remove Element
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator itr;
        itr = remove(nums.begin(), nums.end(), val);
        nums.resize(distance(nums.begin(), itr));
        return nums.size();
    }
};
