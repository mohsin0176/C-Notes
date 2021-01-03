#include<iostream>
using namespace std;
void reverse(const string& a);
int main()
{
    string str;
    getline(cin,str);
    reverse(str);
    return 0;
}

void reverse(const string& str)
{
    size_t numofChars = str.size();
    if(numofChars == 1)
    {
        cout<<str<<endl;
    }
    else
    {
        cout<<str[numofChars-1];
        reverse(str.substr(0,numofChars-1));
    }
}
