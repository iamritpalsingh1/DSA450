#include <iostream>
#include <set>
#include<unordered_set>
using namespace std;

bool subArrayExists(int arr[], int n)
{
    int pre_sum=0;
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if (pre_sum == 0)
        {
            return true;
        }
        if (s.find(pre_sum) != s.end())
        {
            return true;
        }

        s.insert(pre_sum);
    }

    return false;
}

int main()
{

    int arr[] = {-4, 2, 3, 1, 6};
    bool y = subArrayExists(arr, 5);
    if (y)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}