#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        generateSubsets(nums, 0, subset, result);
        return result;
    }

    void generateSubsets(vector<int>& nums, int currentIndex, vector<int>& subset, vector<vector<int>>& result) {
        if (currentIndex == nums.size()) {
            result.push_back(subset); 
            return;
        }

        generateSubsets(nums, currentIndex + 1, subset, result);

        subset.push_back(nums[currentIndex]);
        generateSubsets(nums, currentIndex + 1, subset, result);

        subset.pop_back();
    }
};

