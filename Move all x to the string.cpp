#include<iostream>
using namespace std;
string callvalue(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans = callvalue(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;
}
int main()
{
    cout<<callvalue("axxbdxcefxhip")<<endl;
    return 0;
}
