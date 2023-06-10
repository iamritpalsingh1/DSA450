#include<iostream>
using namespace std;
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    int sum =0;
    	    int r;
    	    int temp=a[i];
    	    while(a[i]>0){
    	        r=a[i]%10;
    	        sum=(sum*10)+r;
    	        a[i]=a[i]/10;
    	    }
    	    if(temp!=sum){
    	        return 0;
    	    }
    	}
    	return 1;
    }
int main(){
    int a[]={111,222,333};
    cout<<PalinArray(a,3);
   return 0;
}