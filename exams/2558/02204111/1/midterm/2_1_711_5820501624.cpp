#include<iostream>
using namespace std;
int main()
{
    char menu,s,t,g,v,size,upto ;int n,total;
    do{
    cout<<"Welcom to A cup-with-love coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M) :";
    cin>>menu;
    if(menu=='e'||menu=='E'||menu=='a'||menu=='A')
    {s=40;t=50;g=60;v=70;}
    else if(menu=='c'||menu=='c'||menu=='l'||menu=='L')
    {s=50;t=60;g=70;v=80;}
    else if(menu=='m'||menu=='m')
    {s=60;t=70;g=80;v=90;}
    cout<<"Enter size (S/T/G/V) :";
    cin>>size;
    cout<<"How many cups? :";
    cin>>n;
    total=size*n;
    cout<<"Do you want other menu?(Y/N) :";
    cin>>upto;
   }
    while(upto=='y'||upto=='Y');
    if(upto=='n'||upto=='N') break;
    cout<<"Total"<<total<<"Baht"<<endl;
    system("pause");
    return 0;
}
    
