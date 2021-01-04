
#include<iostream>
using namespace std;
int main()
{
    int sum=0,i,n,number,arr[100];
    cout<<"How many Numbers you want to take as input:"<<endl;
    cin>>n;
     cout<<"How many Numbers you want to add:"<<endl;
    cin>>number;
    for(i=0;i<=(n-1);i++)
    {
        cin>>arr[i];
    }
        for(i=0;i<=(number-1);i++)
    {
        sum+=arr[i];
    }
     cout<<"Total Numbers after added:"<<endl;
    cout<<sum;
    return 0;
}
