#include <bits/stdc++.h>
using namespace std;
// Function to find all elements in array that appear more than n/k times.
int countOccurence(int nums[], int n, int k)
{
    unordered_map<int, int> m;
    int c;
    int v = 0;
    for (int i = 0; i < n; i++)
    {
        m[nums[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > n / k)
        {
            v++;
        }
    }
    return v;
}
int main()
{
    int a[] = { 2,
                3,
                4,
                2,
                2 } ;
                int c = countOccurence(a, 5, 2);
    return 0;
}