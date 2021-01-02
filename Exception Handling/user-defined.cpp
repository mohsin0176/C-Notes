#include<iostream>
#include<exception>

using namespace std;

class MyException : public exception
{
public:
    const char *what() const throw()
    {
        return " Attempted to Divide by Zero";
    }

};

int main()
{
    try
    {

        int x,y;
        cout<<"Enter Two Number:\n";
        cin>>x>>y;


    if(y==0)
    {
        MyException z;
        throw z;
    }
    else
    {
        cout<<x/y;
    }
    }
    catch(exception& e )
    {
        cout<<e.what();

    }
    return 0;
}
