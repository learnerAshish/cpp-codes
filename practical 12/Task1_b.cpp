#include<iostream>
using namespace std;
class Base
{
    private:
    int a;
    public:
    int b;
    protected:
    int c;
};
class Derived:public Base
{
   
    public:
    void display(){
        cout<<"b="<<b;
    }
};
int main(){
    Derived obj;
    obj.b=10;
    obj.display();
}