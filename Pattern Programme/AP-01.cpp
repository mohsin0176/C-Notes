#include<iostream>
using namespace std;
int main()
{
    char input,alphabet='A';
    int j,i;
    cin>>input;
    for(i=1;i<=(input-'A'+1);i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<alphabet<<" ";
        }
        ++alphabet;
        cout<<endl;
    }
    return 0;
}
