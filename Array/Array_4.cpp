#include <iostream>
#include <vector>

using namespace std;
int main()
{

    vector<int> nums{0, 1, 2, 2, 0, 1, 2, 0, 2, 2, 2};

    int x;
     int mid=0;
        int low=mid;
        int high=nums.size()-1;
        
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid++],nums[low++]);
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high--]);
            }
            
        }

    cout << "arry is " << endl;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}




