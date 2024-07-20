#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        process(s, 0);
    }

    void process(vector<char> &s, int index)
    {
        if(index == s.size()/2){
            return;
        }else{
            iter_swap(s.begin() + index, s.begin() + s.size() - 1 - index);
        }
        process(s, index + 1);
    }
};