// Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = 0, endsWith = 0, maxElement;
        maxElement = nums[0];
        for(int i=0;i<nums.size(); i++){
            endsWith += nums[i];                
            if(maxSoFar < endsWith)
                maxSoFar = endsWith;
            
            if(nums[i] > maxElement)
                maxElement = nums[i];
            
            if(endsWith < 0)
                endsWith = 0;
        }
        if(maxSoFar == 0)
            return maxElement;
        else
            return maxSoFar;
    }
};
