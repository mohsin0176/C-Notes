#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    int num1,num2;
    cin>>num1>>num2;
    switch(ch)
    {
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        default:
            cout<<" Operation Not Found";
            break;
    }
    return 0;
}
