#include <iostream>
using namespace std;
class A
{
public:
    ~A()
    {
        cout << "This is Class A Destructor" << endl;
    }
};
class B : public A
{

public:
    ~B()
    {
        cout << "This is Class B Destructor" << endl;
    }
};
class C : public B
{

public:
   ~C()
    {
        cout << "This is Class C Destructor" << endl;
    }
};
int main()
{
    cout << "Destructor Calls Are: "<<endl;
    C obj; 
    return 0;
}