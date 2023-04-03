#include<iostream>
using namespace std;
//function overloading
class apnacollage{
    public:
        void fun(){
        cout<<"I am a function with no arguments"<<endl;

        }
        void fun(int x){

        cout<<"I am a function with int argument"<<endl;
        }
        void fun(double x){

        cout<<"I am a function with double argument"<<endl;
        }


};
int main()
{
    apnacollage obj;
    obj.fun();
    obj.fun(3);
    obj.fun(5.34);
    return 0;
}

