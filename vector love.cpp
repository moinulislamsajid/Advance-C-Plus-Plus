#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Size Of -> : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size Of -> : "<<v.capacity()<<endl;


    return 0;
}
