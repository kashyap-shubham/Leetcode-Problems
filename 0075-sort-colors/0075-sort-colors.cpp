class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int z=0, t=0, o=0;
        
        for(int i =0; i< nums.size(); i++) {
            if(nums[i] == 0) 
                z++;
            else if(nums[i] == 1)
                o++;
            else
                t++;
        }
        
       
        int count = 0;
        while(z) {
            nums[count] = 0;
            z--;
            count++;
        }
        
        while(o) {
            nums[count] = 1;
            o--;
            count++;
        }
        
        while(t) {
            nums[count] = 2;
            t--;
            count++;
        }
        
    }
};