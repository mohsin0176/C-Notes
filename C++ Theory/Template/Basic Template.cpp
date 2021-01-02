#include<iostream>
using std::cout;
tempalte <typename T>
class Number
{
public:
    void setNum(T n);
    T plus1() const;
private:
    T num;
};

template <typename T>
void Number<T>::setNum(T n)
{
    num=n;
}

template <typename T>
T Number<T>::plus1() const {return num+1;}

int main()
{
    Number<int> anInt;
    anInt.setNum(1);
    cout<<"My Integer +1 is"<<anInt.plus1()<<"\n";
    Number<double> aDouble;
    aDouble.setNum(3.141615698);
    cout<<"My double + 1 is"<<aDouble.plus1()<<"\n";
    Number<float> aFloat;
    aFloat.setNum(1.4);
    cout<<"My Float +1 is"<<aFloat.plus1()<<"\n";

    return 0;
}
