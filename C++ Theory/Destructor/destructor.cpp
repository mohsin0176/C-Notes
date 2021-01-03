#include<iostream>
using namespace std;
class Employee
{
public:
    Employee()
    {
        cout<<"Constructor Invoked"<<endl;
    }
    ~Employee()
    {
        cout<<"Destructor Invoked";
    }
};

int main()
{
    Employee e1;
    return 0;
}
