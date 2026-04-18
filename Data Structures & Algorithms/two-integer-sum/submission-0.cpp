class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);  // Use vector instead of array
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {  // Start j from i + 1
                if(nums[i] + nums[j] == target) {
                    result = {i, j};  // Assign values to result
                    return result;    // Return immediately after finding the match
                }
            }
        }
        return {};  // Return an empty vector if no solution is found
    }
};
