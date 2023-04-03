//"pippppiiiipi"
#include<iostream>
using namespace std;
void repalcepi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p'&& s[1]=='i')
    {
        cout<<"3.14";
        repalcepi(s.substr(1));
    }
    else{

        cout<<s[0];
        repalcepi(s.substr(1));

    }
}
int main()
{
    repalcepi("pippppiiiipi");
    return 0;
}
