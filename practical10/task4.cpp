#include<iostream>
using namespace std;

class person
{
    public:
    int age;
    friend bool operator <(person &a,person &b);
    friend int operator +(person &a,person &b); 
};

bool operator <(person &a,person &b)
{
    if(a.age<b.age) return true;
    return false;
}

int operator +(person &a,person&b)
{
    return a.age+b.age;
}

signed main()
{
    person a,b;
    a.age=19; b.age=21;
    if(a<b) cout<<"age 2 is greater\n";
    else cout<<"age 1 is greater\n";
    cout<<"the sum of age of a and b is : "<<a+b;
    return 0;    
}