#include<iostream>
using namespace std;
    int minSwap(int arr[], int n, int k) {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k){
                count++;
            }
        }
        int bad=0;
        for(int i=0;i<count;i++){
            if(arr[i]>k){++bad;}
        }
        int swaps=bad;
        for(int i=0,j=count;j<n;i++,j++){
            if(arr[i]>k){
                bad--;
            }
            if(arr[j]>k){
                bad++;
            }
            swaps=min(swaps,bad);
        }
 
        return swaps;
    }
int main(){
    int arr[]={2,3,7,6,4,6};
    int k=5;
    cout<<minSwap(arr,6,k);
    return 0;
}