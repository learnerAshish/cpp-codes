#include <iostream>
using namespace std;
class A
{
public:
    int a;
    A(int y)
    {
        a = y;
        cout << "a =" << a << endl;
    }
};
class B : public A
{

public:
    int b;
    B(int k):A(k)
    {
        b = k;
        cout << "b =" << b << endl;
    }
};
class C : public B
{
    int c;

public:
    C(int x):B(x)
    {
        c=x;
        cout << "c =" << c << endl;
    }
};
int main()
{
    C obj(16); 
    return 0;
}