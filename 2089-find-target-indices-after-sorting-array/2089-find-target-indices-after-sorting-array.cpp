
class Solution {
public:
    std::vector<int> targetIndices(std::vector<int>& nums, int target) {
        // Sort the array in non-decreasing order
        std::sort(nums.begin(), nums.end());
        
        std::vector<int> result;
        // Collect indices where the number matches the target
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
