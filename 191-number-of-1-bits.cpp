#include <bitset>

class Solution
{
public:
    int hammingWeight(int n)
    {
        std::bitset<32> binary_representation(n); 
        return binary_representation.count();
    }
};