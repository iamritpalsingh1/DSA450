#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(int arr[],int n, int k)
{
    sort(arr,arr+n);

    int ans=arr[n-1]-arr[0];
    int ma=arr[n-1]-k;
    int mi=arr[0]+k;

    for(int i=1;i<n;i++)
    {
        ma=max(ma,arr[i-1]-k);
        mi=min(mi,arr[i]+k);
        ans=min(ans,ma-mi);

    }
    return ans;



}


int main(){

    int n=7;
    int arr[]={4,2,2,5,6,8,9};

    cout<<helper(arr,n,3);

   return 0;
}