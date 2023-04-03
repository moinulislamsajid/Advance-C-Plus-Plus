#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter[100];
   public :
    void initcounter(void){ counter = 0;}
    void getprice(void);
     void displayprice(void);
};
void shop :: getprice(void)
{
    cout<<"Enter id of your item : ";
    cin>>itemid;[counter];
    cout<<"Enter id of your item : ";
    cin>>itemprice;[counter];
    counter ++;
}
 void shop :: displayprice(void)
 {
     for(int i = 0; i<counter; i++)
     {
         cout<<"The Price Of item with id "<<itemid[i]<<" is "<<itemprice[i]"\n";
     }
 }

int main()
{
    shop dukan;
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    return 0;
}
