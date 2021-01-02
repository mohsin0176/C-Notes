#include<iostream>
using namespace std;
int main()
{
    char grade;
    cin>>grade;
    switch(grade)
    {
    case 'A':
        cout<<"You got 75"<<endl;
        break;
    case 'B':
        cout<<"You Got 65"<<endl;
        break;
    case 'C':
        cout<<"You Got 55"<<endl;
        break;
    case 'D':
        cout<<"You got 45"<<endl;
        break;
    default:
        cout<<"You got under 40"<<endl;
        break;
    }
    cout<<"You Got:::"<<grade;
    return 0;
}
