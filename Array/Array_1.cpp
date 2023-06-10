#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int* reverse(int arr[],int n)
{
    int l=0;
    int h=n-1;

    while(l<=h)
    {
        swap(&arr[l],&arr[h]);
    }
    return arr;

}

void print(int*arr,int n)
{
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<endl;
    }
}

int main(){
    int *arr=new int[5];

    for(int i=0;i<5;i++)
    {
        arr[i]=i+1;
    }
    arr=reverse(arr,5);
    print(arr,5);
   return 0;
}