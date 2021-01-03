#include<iostream>
using namespace std;

int main()
{

    int n,reverseNumber=0,remainder;
    cin>>n;
    while(n!=0)
    {
        remainder=n%10;
        reverseNumber=reverseNumber*10+remainder;
        n=n/10;
    }
    cout<<reverseNumber;

    return 0;
}
