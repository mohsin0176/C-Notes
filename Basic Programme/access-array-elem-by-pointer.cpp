#include<iostream>
using namespace std;
int main()
{
    int data[5];
    for(int i=0;i<=5;i++)
    {
        cin>>data[i];
    }
    for(int i=0;i<=5;i++)
    {
        cout<<*(data+i);
    }
    return 0;
}
