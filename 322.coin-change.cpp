
/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void removeCoins(vector<int>& coins, int change) {
        // Remove coins greater than the change
        auto it = remove_if(coins.begin(), coins.end(), [change](int coin) {
            return coin > change;
        });
        coins.erase(it, coins.end());
    }

    int coinChange(vector<int>& coins, int amount) {
        int money = 0;
        int ans = 0;

        // Sort in descending order
        sort(coins.begin(), coins.end(), greater<int>());

        while (true) {
            // Calculate the remaining change needed
            int change = amount - money;
            removeCoins(coins, change);

            // If no coins are left and the amount is not met, return -1
            if (coins.empty()) {
                return (money == amount) ? ans : -1;
            }

            // Find the largest coin and add it to money
            auto it = max_element(coins.begin(), coins.end());
            if (it == coins.end() || *it > change) {
                return -1;
            }
            
            money += *it;
            ans++;

            // If we have reached the exact amount, return the answer
            if (money == amount) {
                return ans;
            }
        }
    }
};

// @lc code=end

