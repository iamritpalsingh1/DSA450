#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;
    char arr[n];
    vector<char>result;
    cout<<"enter"<<endl;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    int i=1;
    while(i<n)
    {
        if(arr[i+1]=='_')
        {
            result.push_back('W');
            i++;
        }
        else{
            if(arr[i+1]=='*')
            {
                if(arr[i+2]=='*')
                {
                  result.push_back('J');
                  i=i+3;

                }
              else{
                result.push_back('J');
                 i=i+2;
              }
            }
        }


    }

    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }

   return 0;
}
// S _ * * _ _ _ * _ * * D
// S _ _ _ _ _ _ _ _ D
// S _ * _ _ * * _ _ D