#include<iostream>
using namespace std;
namespace first
{
 int add(int a,int b)
 {
   return a+b;
 }
}
namespace second
{
 float add(float a,float b)
 {
   return a+b;
 }
}

using namespace first;
using namespace second;
int main()
{
 cout<<add(1,2);
 cout<<add(1.2,2);
 cout<<add(1.1,2.1);
 cout<<add(0,0);
 return 0;
}
