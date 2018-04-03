#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    char menu,size,want,member;
    int cup;
    float total,price,discount,pay;
    cout << " welcome to A Cup-with-love Coffee!! "<<endl;
    cout << " Enter your menu (E/A/L/C/M) : ";
    cin>>menu;
    cout << " size (S/T/G/V) : ";
    cin>>size;
    if(menu=='E'||menu=='e'&&size=='S'||size=='s')
    {
     price=40;
     }
    cout << " How many cup? : " ;
    cin>>cup;
    cout << " Do you want other menu ? (Y/N) : " <<endl;
    cin>>want;
    cout<< " Are you a member? (Y/N) : "<<endl;
    cin>>member;
    if(member=='Y'||member=='y')
    {
                                
}
    cout<< " Total "<< total << "Baht" ;
    
    total=price*cup;

    
    system ("pause");
    return 0;
}
    
    
     
