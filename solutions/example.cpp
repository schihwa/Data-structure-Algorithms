#include <iostream>
#include <vector>
#include <numeric> // for std::accumulate

// Function to determine which sums can be formed using given weights
void findPossibleSumsOptimized(const std::vector<int>& weights) {
    int maxSum = std::accumulate(weights.begin(), weights.end(), 0);

    // Initialize DP array
    std::vector<bool> possible(maxSum + 1, false);
    possible[0] = true; // Base case: sum 0 is always achievable

    // Update DP array
    for (const int weight : weights) {
        // Create a copy of the current state to avoid overwriting
        std::vector<bool> newPossible = possible;

        // Update possible sums based on the current weight
        for (int sum = 0; sum <= maxSum - weight; ++sum) {
            if (possible[sum]) {
                newPossible[sum + weight] = true;
            }
        }

        // Update possible to the new state
        possible = std::move(newPossible);
    }

    // Output the results
    std::cout << "Possible sums with given weights: ";
    for (int sum = 0; sum <= maxSum; ++sum) {
        if (possible[sum]) {
            std::cout << sum << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    // Example weights
    std::vector<int> weights = {1, 3, 3, 5};
    
    // Find and print possible sums
    findPossibleSumsOptimized(weights);
    
    return 0;
}
