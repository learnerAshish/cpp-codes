#include<iostream>
using namespace std;
class Parent
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
};
class Child:protected Parent
{
   
    public:
    void display()
    {
        b=10;
        c=15;
        cout<<"b="<<b<<endl<<"c="<<c;
    }
};
int main()
{
    Child P;
    P.display();
    return 0;
}