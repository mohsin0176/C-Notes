#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char input[75];
    ofstream os;
    os.open("testout.txt");
    cout<<"Writting to a Text File"<<endl;
    cout<<"Enter Your Name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Enter Your Age:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();
    ifstream is;
    string line;
    is.open("testout.txt");
    cout<<"Reading From A text file"<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}
