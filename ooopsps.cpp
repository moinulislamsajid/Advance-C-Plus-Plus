#include<iostream>
using namespace std;
class Dhaka{
  string DIUArea;

  public :
      void DIUArea(string a){

         DIUArea=a;
  }
      int KM;
      bool jamorfree;
    Dhaka(string s, int a, int g){

        s=name;
        a=age;
        g=gender;

    }//constructor
    bool operator == (student &a){
            if(name==s.name||age==a.age||gender==g.gender){
                return true;
            }
            return false;

    }






};
int main()
{
    Dhaka D;
    D.DIUArea="Badda Satarkul";
    D.KM=20;
    D.jamorfree=1;
    cout<<D.DIUArea<<endl;
    cout<<D.KM<<endl;
    cout<<D.jamorfree<<endl;

    return 0;
}
