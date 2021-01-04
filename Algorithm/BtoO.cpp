#include<iostream>
#include<cmath>
using namespace std;
int convertBinaryToOcatl(long long);
int convertBinaryToOcatl(long long binaryNumber)

{
    int octalNumber=0,decimalNumber=0,i=0;
    while(binaryNumber !=0)
    {
      decimalNumber+=(binaryNumber%10)*pow(2,i);
      i++;
      binaryNumber/=10;
    }
    i=1;
    while(decimalNumber!=0)
    {
        octalNumber+=(decimalNumber%8)*i;
        decimalNumber/=8;
        i*=10;
    }
    return octalNumber;
}

int main()
{
    long long binaryNumber;
    cin>>binaryNumber;
    cout<<convertBinaryToOcatl(binaryNumber);
    return 0;
}
