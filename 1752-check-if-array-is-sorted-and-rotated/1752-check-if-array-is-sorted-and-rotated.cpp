class Solution {
public:
    bool check(vector<int>& nums) {
        
        for(int i=0, count=0; i<nums.size(); ++i) {
            if(nums[i] > nums[(i+1) % nums.size()] && ++count > 1 )
             return false;
        }
        return true;
    }
};