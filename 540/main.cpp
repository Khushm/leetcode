// Single Element in a Sorted Array
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i =0; i<nums.size();i++){
            if(count(nums.begin(), nums.end(), nums[i]) == 2){
                i++;
            }
            else
                return nums[i];
        }
        return -1;
    }
};
