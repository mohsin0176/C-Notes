#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int arr[100];
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
