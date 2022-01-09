#include<iostream>
#include<string>
#include<istream>
#include<sstream> 
#include<iomanip>
using namespace std;
int main()
{
	int d=100; 
	string s="   Ashish Joshi";
	cout<<"hexadecimal: "<<hex<<d<<endl;
	cout<<"Decimal: "<<dec<<d<<endl;
	
	string t;
	istringstream iss1("   Ashish "); 
	istringstream iss2("   Ashish "); 
	istringstream iss3("   Ashish "); 
	iss1>>noskipws>>t;
	cout<<"noskipws: "<<t<<endl;
	iss2>>skipws>>t;
	cout<<"skipws: "<<t<<flush;
	iss3>>ws>>t; 
	cout<<"WS: "<<t<<ends;;
    
     
     
    
    double c=3.14567;
    cout<<"setw: "<<setw(5)<<c<<endl;;
    cout<<"setprecision: "<<setprecision(4)<<c<<endl;;
    return 0;
}
