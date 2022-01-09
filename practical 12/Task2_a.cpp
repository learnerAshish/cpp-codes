#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "This is Class A Constructor" << endl;
    }
};
class B : public A
{

public:
    B()
    {
        cout << "This is Class B Constructor" << endl;
    }
};
class C : public B
{

public:
    C()
    {
        cout << "This is Class C Constructor" << endl;
    }
};
int main()
{
    cout << "Constructor Calls Are: "<<endl;
    C obj; 
    return 0;
}