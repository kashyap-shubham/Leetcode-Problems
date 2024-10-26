class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
//         Approach 1:
        
//         vector<int> positiveIntegerList;
//         vector<int> negativeIntegerList;

//         vector<int> finalResult;

//         for(int i=0; i<nums.size(); i++) {
//             if(nums[i] > 0) {
//                 positiveIntegerList.push_back(nums[i]);
//             }

//             else if(nums[i] < 0) {
//                 negativeIntegerList.push_back(nums[i]);
//             }

//         }

//         for(int i=0; i<nums.size()/2; i++) {
//             finalResult.push_back(positiveIntegerList[i]);
//             finalResult.push_back(negativeIntegerList[i]);
//         }

//         return finalResult;
        
        
        
//         Approach 2:
        
        vector<int> result(nums.size(), 0);
        int posIndex = 0;
        int negIndex = 1;
        
        for (int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) {
                result[posIndex] = nums[i];
                posIndex += 2;
            }
            else {
                result[negIndex] = nums[i];
                negIndex += 2;
            }
        }
        
        return result;
    

    }
};