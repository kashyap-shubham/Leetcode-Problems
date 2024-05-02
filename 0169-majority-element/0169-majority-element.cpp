class Solution {
public:
    int majorityElement(vector<int>& nums) {
     // approach 1
     // sort(nums.begin(), nums.end());
     // int n = nums.size();
     // return nums[n/2];
        
//         approach 3 ->
        
        int count = 0;
        int res;
        for(int i =0; i< nums.size(); i++) {
            if(count == 0) {
                 res = nums[i];
                 count++;
            }
               
            else if(nums[i] ==res)
                count++;
            else
                count--;
            
        }
        return res;
        
 
    } 
};