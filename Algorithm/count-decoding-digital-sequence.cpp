#include<iostream>
#include<string.h>
using namespace std;
int countDecoding(char *digit,int n)
{
    int decodings[n+1];
    decodings[0]=1;
    decodings[1]=1;
    for(int i=1;i<=n;i++)
    {
        int q=digit[i]-48;
        int p=digit[i-1]-48;
        if(q>0 && q<=26)
        {
            decodings[i+1]=decodings[i];

        }
        if((q+p*10)>0 && (q+p*10)<=26)

        {
           decodings[i+1]+=decodings[i-1];
        }
    }
    return decodings[n];
}

int main()
{

    char digit[20];
  cin>>digit;
    int n=strlen(digit);
    cout<<digit<<endl<<countDecoding(digit,n);
    return 0;
}
