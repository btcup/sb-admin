#include <iostream>
using namespace std;

int main()
{
    int total,discount,pay,cup;
    float dis;
    char menu,w,size,member;
    dis=total*0.1;
    pay=total*dis;
    total=size*menu;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>menu;
    cout<<"Enter size (S/T/G/V) : ";
    cin>>size;
    cout<<"How many cups? : ";
    cin>>cup;
    cout<<"Do you want other menu? (Y/N) : ";
    cin>>w;
    do
    {
    if (w=='Y')
    {
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>menu;
    cout<<"Enter size (S/T/G/V) : ";
    cin>>size;
    cout<<"How many cups? : ";
    }
    else
    cout<<"Are you a member? : ";
    cin>>member;
    
    cout<<"Total  "<<total;
    cout<<"Discount  "<<dis;
    cout<<"You pay "<<pay;endl;
    cout<<"Thank you"<<endl;
    
    
    system("pause");
    return 0;
}
    
    
    
    
