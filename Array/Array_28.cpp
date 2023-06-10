#include <iostream>
#include<vector>
using namespace std;
long long calc(vector<int> arr, int n, int i, int j)
{
    long long prod = 1;
    while (j < arr.size())
    {
        if (arr[j] > 0)
        {
            prod = prod * arr[j];
            i = j;
            j++;
        }
        else
        {
            prod = max(prod, calc(arr, n, j + 1, n));
        }
    }
    return prod;
}

long long maxProduct(vector<int> arr, int n)
{
    // code here
    int j = 1;
    int i = 0;
    // long long prod

    return calc(arr, n, i, j);
}
int main()
{
    vector<int>arr={4,3,5,-2,1,0};
    long long z=maxProduct(arr,6);
    cout<<z;

    return 0;
}