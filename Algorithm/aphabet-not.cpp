
#include<iostream>
using namespace std;
int main()
{

    char c;
    cin>>c;
    if((c>='a' && c<='z')||(c>='A'&&c<='Z'))
    {
        cout<<"Alphabet";
    }
    else
    {
        cout<<"Not Alphabet";
    }
    return 0;
}
