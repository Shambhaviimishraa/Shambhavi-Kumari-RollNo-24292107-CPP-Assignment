#include<iostream>
using namespace std;
int main()
{
  int a = 10 , b = 5;
  //Swap without third variable
     a = a + b;
     b = a - b;
     a = a - b;
  
cout<<"After Swapping"<<endl;
cout<<"a = "<< a  <<endl;
cout<<"b = "<< b  <<endl;

return 0;
}
