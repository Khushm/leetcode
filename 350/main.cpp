//  Intersection of Two Arrays II

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        
        if(nums1.size() > nums2.size()){
            swap(nums1, nums2);
        }
        unordered_map<int,int> m;
        for(auto val:nums1){
            m[val]++;
        }
        for(auto val:nums2){
            if(m[val] > 0){
                v.push_back(val);
                m[val]--;
            }
        }
        return v;
    }
};
