#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        // Check if nums is empty
        if (nums.empty()) return 0;

        // Define a vector to store the subsequence
        vector<int> lis;

        // Function to process each element
        auto processElement = [&lis](int num) {
            // Find the position to replace or insert the current number
            auto it = lower_bound(lis.begin(), lis.end(), num);

            if (it == lis.end()) {
                lis.push_back(num);
            } else {
                *it = num;
            }
        };

        // Apply the function to each element
        for_each(nums.begin(), nums.end(), processElement);

        return lis.size();
    }
};
