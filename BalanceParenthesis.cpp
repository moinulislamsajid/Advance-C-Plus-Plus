#include<iostream>
using namespace std;
bool isvalid(string s){
    int n = s.size();
    stack<char> st;
    bool ans = true;
    for(int i=0;i<n;i++){
        if(s[i]=='{' or s[i]=='(' or s[i] == '['){
            st.push[i];
           }
       else if(s[i]==')'){
            if(st.top()== '('){
                st.pop();
               }
          }
          else{
            ans = false;
            break;
          }
    }

}
int main()
{
   string s = "{([])}";
   if(isvalid(s)){
     cout<<"valid String"<<endl;
   }
   else{
     cout<<"invalid String"<<endl;
   }

    return 0;
}
