#include<bits/stdc++.h>

using namespace std;

// kth min element

void kthmin(int arr[],int &k,int n)
{
   priority_queue<int> q1;
    for(int i=0;i<k;i++)
    {
        q1.push(arr[i]);
    }

    for(int i=k;i<n;i++)
    {
        if(arr[i]<q1.top())
        {
            
        }
    }
}

int main(){

    int arr[]={8,5,6,10,12,1,0};
    int k=4;
    kthmin(arr,k,7);
    
   return 0;
}