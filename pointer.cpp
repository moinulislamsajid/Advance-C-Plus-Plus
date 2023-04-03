#include<iostream>
using namespace std;
int main()
{
  int a=3;
  int* b=&a;
  cout<<"The Address of a is : "<<&a<<endl;
  cout<<"The Address of a is : "<<b<<endl;
  cout<<"The Address of a is : "<<*b<<endl;


  int** c= &b;
  cout<<"the value at address b is : "<<&c;
  cout<<"the value at address b is : "<<*c;

   return 0;

}
