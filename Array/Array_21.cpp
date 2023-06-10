#include<iostream>
#include<vector>
using namespace std;


int merge(vector<int>v,vector<int>&ans,int l,int mid,int h)
{
    int i=l;
    int j=mid;
    int count=0;


    while(i<=mid-1 && j<=h)
    {
        if(v[i]<=v[j])
        {
            ans.push_back(v[i]);
            i++;
        }
        else{
            ans.push_back(v[j]);
            j++;
            count=count+mid-i;
        }
    }
    return count;
}


int mergesort(vector<int>v,vector<int>&ans,int l,int h)
{
    int count=0;
    if(l<h)
    {
        int mid=(l+h)/2;

        count=mergesort(v,ans,l,mid);
        count+=mergesort(v,ans,mid+1,h);
        count+=merge(v,ans,l,mid,h);

    }
    return count;
}



int main(){

    vector<int>v{2,4,1,3,5};
    vector<int>ans=v;

   int count= mergesort(v,ans,0,4);
    cout<<count<<endl;



   return 0;
}