#include <iostream>
#include <set>
using namespace std;
int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7, 8};
    int n = 5;
    int m = 6;
    int i = 0;
    int j = 0;
    set<int> s;

    // union

    // for(int i=0;i<n;i++)
    // {
    //     s.insert(arr1[i]);
    // }

    // for(int i=0;i<m;i++)
    // {
    //     s.insert(arr2[i]);
    // }

    // for(auto i:s)
    // {
    //     cout<<i<<" ";
    // }

    // intersection
    // while (i<n && j<m)
    // {
    //     if (arr1[i] == arr2[j])
    //     {
    //         s.insert(arr1[i]);
    //         i++;
    //         j++;
    //     }

    //     else if (arr1[i] < arr2[j])
    //     {
    //         i++; 
    //     }
    //     else
    //     {
    //         j++;
    //     }
    // }

    // for(auto i:s)
    // {
    //     cout<<i<<" ";
    // }

    while(i<n && j<m)
    {
        if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;

        }

        else if(arr1[i]<arr2[j])
        {
                        cout<<arr1[i]<<" ";
            i++;
        }

        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }

    }

    while(j<m)
    {
        cout<<arr2[j]<<" ";
        j++;
    }

    while(i<n)
    {
        cout<<arr1[i]<<" ";
        i++;
    }

    










    return 0;
}