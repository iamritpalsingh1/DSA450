#include<iostream>
using namespace std;

struct item{
    int min=99999;
    int max=-11111;

};

struct item minmax(int arr[],int low,int high)
{
    struct item temp1,temp2,i1;
    if(low==high)
    {
        i1.max=arr[low];
        i1.min=arr[low];
        return i1;
    }

    if(high==low+1)
    {
        if(arr[low]>arr[high])
        {
            i1.max=arr[low];
            i1.min=arr[high];
        }
        else{
            i1.max=arr[high];
            i1.min=arr[low];
        }
        return i1;
    }

    int mid=(low+high)/2;
    temp1=minmax(arr,low,mid);
    temp2=minmax(arr,mid+1,high);
    if(temp1.max>temp2.max)
    {
        i1.max=temp1.max;

    }
    else{
        i1.max=temp2.max;
    }
    if(temp1.min>temp2.min)
    {
        i1.min=temp2.min;

    }
    else{
        i1.min=temp1.min;
    }
    return i1;  




}

int main(){
    int arr[]={1000, 11, 445,
                  0, 330, 3000};
    struct item i1=minmax(arr,0,5);
    cout<<i1.max<<endl;
    cout<<i1.min<<endl;

   return 0;
}
// 5,7,3,6,1,0