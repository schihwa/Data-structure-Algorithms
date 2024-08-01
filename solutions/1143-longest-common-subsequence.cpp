#include <string>
#include <vector>
#include <algorithm>
#include <regex>

using namespace std;

class Solution
{
public:
    int maxMatches{0};

    // Function to generate a specific subsequence
    string generateSubsequence(const string& text, int start, int length) {
        return text.substr(start, length);
    }

    // Function to count matches of a subsequence in text1
    int countMatches(const string &text1, const string &subsequence) {
        regex pattern(subsequence);
        auto words_begin = sregex_iterator(text1.begin(), text1.end(), pattern);
        auto words_end = sregex_iterator();
        return distance(words_begin, words_end);
    }

    // Function to find the length of the longest common subsequence
    int longestCommonSubsequence(const string &text1, const string &text2)
    {
        int n = text2.length();

        // Start with the largest subsequence and work our way down
        for (int len = n; len > 0; len--) {
            for (int start = 0; start <= n - len; start++) {
                string subsequence = generateSubsequence(text2, start, len);
                int matches = countMatches(text1, subsequence);
                maxMatches = max(maxMatches, matches);

                // If we find any match, we can return immediately as this is the longest
                if (maxMatches > 0) {
                    return maxMatches * len; // Return the length of the longest common subsequence
                }
            }
        }

        return 0; // No common subsequence found
    }
};