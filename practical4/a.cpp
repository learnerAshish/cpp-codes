#include<iostream>
namespace First
{
 int add(int a,int b)
 {
   std::cout<<a+b<<"\n";
 }
}
namespace Second
{
 float add(float a,float b)
 {
   std::cout<<a+b<<"\n";
 }
}

int main()
{
 float x,y;
 std::cin>>x;
 std::cin>>y;
 First::add(x,y);
 Second::add(x,y);
 return 0;
}
