class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> positiveIntegerList;
        vector<int> negativeIntegerList;

        vector<int> finalResult;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) {
                positiveIntegerList.push_back(nums[i]);
            }

            else if(nums[i] < 0) {
                negativeIntegerList.push_back(nums[i]);
            }

        }

        for(int i=0; i<nums.size()/2; i++) {
            finalResult.push_back(positiveIntegerList[i]);
            finalResult.push_back(negativeIntegerList[i]);
        }

        return finalResult;

    }
};