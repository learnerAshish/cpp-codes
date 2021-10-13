#include <iostream>
#include <ctime>
using namespace std;
int main( )
{   
  time_t ttime = time(0);   
  char* dt = ctime(&ttime);
  cout << "current date and time: " << dt;
}
