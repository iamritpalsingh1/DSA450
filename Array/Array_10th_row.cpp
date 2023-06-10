#include <iostream>
using namespace std;
int main()
{

    int arr[]={-12,11,-13,-5,6,-7,5,-3,-6};
    int left=0;
    int right=8;
    while (left <= right)
    {
        // Condition to check if the left
        // and the right elements are
        // negative
        if (arr[left] < 0 && arr[right] < 0){
            left += 1;}

        // Condition to check if the left
        // pointer element is positive and
        // the right pointer element is negative
        else if (arr[left] > 0 && arr[right] < 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left += 1;
            right -= 1;
        }
        

        // Condition to check if both the
        // elements are positive
        else if (arr[left] > 0 && arr[right] > 0){
            right -= 1;}
        else
        {
            left += 1;
            right -= 1;
        }
    }

    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}