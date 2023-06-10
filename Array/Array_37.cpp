#include <bits/stdc++.h>
using namespace std;
void threeWayPartition(vector<int> &arr, int a, int b)
{
    int start = 0, end = arr.size() - 1;

    // Traverse elements from left
    for (int i = 0; i <= end;)
    {

        if (arr[i] < a)
        {

            if (i == start)
            {
                start++;
                i++;
            }
            else
                swap(arr[i++], arr[start++]);
        }
        else if (arr[i] > b)
            swap(arr[i], arr[end--]);

        else
            i++;
    }
}
int main()
{

    return 0;
}