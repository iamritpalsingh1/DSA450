#include<iostream>
#include<vector>
using namespace std;
    int MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int i=0;
        int j=0;
        int n=array2.size();
        int m=array2.size();
        vector<int>v;
        
        while(i<n && j<m){
            if(array1[i]<array2[j]){
                v.push_back(array1[i]);
                i++;
            }
            if(array1[i]>array2[j]){
                v.push_back(array2[j]);
                j++;
            }            
        }
        while(i<n){
            v.push_back(array1[i]);
                i++;
        }
        while(j<m){
            v.push_back(array2[j]);
                j++;
        }
        
        if((n+m)%2==0){
            return double(v[(n+m)/2]+v[(n+m)/2 -1])/2;
        }
        else
            return v[(n+m)/2];
    }
int main(){
    vector<int>array1={2,4,6};
    vector<int>array2={1,3,5};
    MedianOfArrays(array1,array2);
   return 0;
}