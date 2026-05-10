#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    vector<int> nums;
    vector<int> queries;
    vector<int> res;

    sort(nums.begin(), nums.end());

    int length = nums.size();
    vector<int> prefix(length, 0);
    prefix[0] = nums[0];

    for (int i = 1; i < length; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }

    vector<int> res;

    for (int q : queries)
    {
        int count = 0;
        for (int i = 0; i < length; i++)
        {
            if (prefix[i] <= q)
                count = i + 1;
            else
                break;
        }
        res.push_back(count);
    }

    return 0;
};
