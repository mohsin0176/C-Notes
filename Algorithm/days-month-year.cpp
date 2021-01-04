#include<iostream>
using namespace std;
int main()
{
    char month;
    int year;
    cin>>year;
    cin>>month;
    if(year%4==0)
    {
                switch(month)
                        {
                        case 'January':
                                cout<<"31 Days";
                                break;
                        case 'February':
                                cout<<"29 Days";
                                break;
                        case 'March':
                                cout<<"31 Days";
                                break;
                        case 'April':
                                cout<<"30 Days";
                                break;
                        case 'May':
                                cout<<"31 Days";
                                break;
                        case 'June':
                                cout<<"30 Days";
                                break;
                        case 'July':
                                cout<<"31 Days";
                                break;
                        case 'August':
                            cout<<"31 Days";
                            break;
                        case 'September':
                            cout<<"30 Days";
                            break;
                        case 'October':
                            cout<<"31 Days";
                            break;
                        case 'November':
                            cout<<"30 Days";
                            break;
                        default:
                            cout<<"31 Days";
                            break;

                        }
    }
    else
    {


                    switch(month)
                        {
                        case 'January':
                            cout<<"31 Days";
                            break;
                        case 'February':
                            cout<<"28 Days";
                            break;
                        case 'March':
                            cout<<"31 Days";
                            break;
                        case 'April':
                            cout<<"30 Days";
                            break;
                        case 'May':
                            cout<<"31 Days";
                            break;
                        case 'June':
                        cout<<"30 Days";
                            break;
                        case 'July':
                        cout<<"31 Days";
                            break;
                        case 'August':
                            cout<<"31 Days";
                            break;
                        case 'September':
                            cout<<"30 Days";
                            break;
                        case 'October':
                            cout<<"31 Days";
                            break;
                        case 'November':
                            cout<<"30 Days";
                            break;
                        default:
                            cout<<"31 Days";
                            break;

                        }
    }

    return 0;
}
