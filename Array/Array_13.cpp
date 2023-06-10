#include <iostream>
#include <vector>
using namespace std;

// kadane"s algorithm
int main()
{
    vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};

    int sum = 0;
    int max =-99999999;

    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];

        if (max < sum)
        {
            max = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}
