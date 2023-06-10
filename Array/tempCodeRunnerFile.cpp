#include<iostream>
#include<set>
using namespace std;
int main(){

    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7,8};
    int n=5;
    int m=6;
    int i=0;
    int j=0;
    set<int>s;

    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }

    for(int i=0;i<m;i++)
    {
        s.insert(arr2[i]);
    }

    for(auto i:s)
    {
        cout<<i<<" ";
    }




    



   return 0;
}