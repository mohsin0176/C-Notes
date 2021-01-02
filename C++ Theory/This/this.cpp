#include<iostream>
using namespace std;
int main()
{
    Demo obj;
    obj.setMyValues(100,'A');
    obj.displayMyValues();
    return 0;
}
class Demo
{
private:
    int m;
    char ch;
public:
    void setMyValues(int m,char ch)
    {
        this->m=m;
        this->ch=ch;
    }
    void displayMyValues()
    {
        cout<<m<<endl;
        cout<<ch;
    }
};
