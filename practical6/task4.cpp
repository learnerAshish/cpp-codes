#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 string a="";
 getline(cin,a);
 string b="";
 getline(cin,b);
 if((a.compare(b))==0)
 cout<<"equal"<<endl;
 else
 cout<<"not equal"<<endl;
 return 0;
}
