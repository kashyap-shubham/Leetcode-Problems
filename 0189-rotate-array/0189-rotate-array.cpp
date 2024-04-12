class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int array_size = size(nums);
        vector<int> new_array(array_size);
        int new_loc;
        
        for(int i=0; i < array_size; i++) {
            new_loc = (i+k) % array_size;
            new_array[new_loc] = nums[i];
        }

        for(int i =0; i< array_size; i++) {
            nums[i] = new_array[i];

        }
        
        
    }
};