#include <iostream>
using namespace std;
int main()
{
    char menu,size,want,mem;
    float cup,s,tot,sum,dis=0;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    do{
    cout<<"Enter your menu (E/A/L/C/M): ";cin>>menu;
    cout<<"Enter size (S/T/G/V): ";cin>>size;
    cout<<"How many cups? : ";cin>>cup;
    cout<<"Do you want any menu? (Y/N): ";cin>>want;
              switch(menu){
              case 'e' : case 'E' : case 'a' : case 'A' : 
                                    if(size=='s'||size=='S')
                                    s=40;
                                    if(size=='t'||size=='T')
                                    s=50;
                                    if(size=='g'||size=='G')
                                    s=60;
                                    if(size=='v'||size=='V')
                                    s=70;break;
              case 'c' : case 'C' : case 'l' : case 'L' : 
                                    if(size=='s'||size=='S')
                                    s=50;
                                    if(size=='t'||size=='T')
                                    s=60;
                                    if(size=='g'||size=='G')
                                    s=70;
                                    if(size=='v'||size=='V')
                                    s=80;break;
              case 'm' : case 'M' : if(size=='s'||size=='S')
                                    s=60;
                                    if(size=='t'||size=='T')
                                    s=70;
                                    if(size=='g'||size=='G')
                                    s=80;
                                    if(size=='v'||size=='V')
                                    s=90;break;
              }
              sum=s*cup;
              tot+=sum;
    }while(want=='Y'||want=='y');
    cout<<"Are you a member? (Y/N): ";cin>>mem;
    if(mem=='y'||mem=='Y')
    dis = tot/10;
    cout<<"Totat "<<tot<<" Bath"<<endl;
    cout<<"Discount "<<dis<<" Bath"<<endl;
    cout<<"You Pay "<<tot-dis<<" Bath"<<endl;
    cout<<"Thank you."<<endl;
    system ("pause");
    return 0;
}
