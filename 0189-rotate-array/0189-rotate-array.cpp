
class Solution {
    
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k%nums.size();
        int *start, *end;
        start = &nums[0];
        end = &nums[nums.size()-1];
        int size = nums.size();
        
        reverse(start, start + (size - k-1));
        reverse(start + (size - k), end);
        reverse(start, end);
    }
    
    
public: 
    void reverse(int *start, int *end) {
        
        int temp;
        
        while(start <= end) {
            temp =  *start;
            *start = *end;
            *end = temp;
            start++;
            end--;
        }
    }
};