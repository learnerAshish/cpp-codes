#include <iostream>
using namespace std;
class prime
{
  private:
    int n;
  public:
  void setdata(int a);
   void check()
{ 
  int f=0;
if(n>1)
{
    for(int i=2;i<=(n/2);i++)
    {
      if(n%i==0)
        {
          f=1;
          break;
         }
    }
  if(f==0)
   cout<<"prime number";
else
cout<<"not a prime";
}
else
cout<<"not a prime";
}
};
void prime :: setdata(int a)
{
n=a;
}
int main()
{
prime num;
int a;
cin>>a;
num.setdata(a);
num.check();
return 0;
}
