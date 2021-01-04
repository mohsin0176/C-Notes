
#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,sum=0;
    cin>>n;
    for(int i=0;i<=(n-1);i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
