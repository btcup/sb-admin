#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int cups,pay,total,r,j,m,a,b,c;
    char me,size,want,mem; 
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu(E/A/L/C/M) :";
    cin>>me;
    j=0;
    m=0;
    a=0;
    b=0;
    c=0;
    while(me=='E'||me=='e'||me=='A'||me=='a'||me=='L'||me=='l'||me=='C'||me=='c'||me=='M'||me=='m')
    {                                                                                            
    if(me=='E'||me=='e')
    {
    cout<<"Enter size(S/T/G/V) :";
    cin>>size;
    if(size=='s'||size=='S')
    pay=40;
    if(size=='t'||size=='T')
    pay=50;
    if(size=='g'||size=='G')
    pay=60;
    if(size=='v'||size=='V')
    pay=70;
    cout<<"How many cups? :";
    cin>>cups;
    j=pay*cups;
    cout<<"Do you want other menu?(Y/N):";
    cin>>want;
    if(want=='Y'||want=='y')
    {
    cout<<"Enter your menu(E/A/L/C/M) :";
    cin>>me;
    continue;
    }
    else
    break;
    }
    if(me=='A'||me=='a')
    {
    cout<<"Enter size(S/T/G/V) :";
    cin>>size;
    if(size=='s'||size=='S')
    pay=40;
    if(size=='t'||size=='T')
    pay=50;
    if(size=='g'||size=='G')
    pay=60;
    if(size=='v'||size=='V')
    pay=70;
    cout<<"How many cups? :";
    cin>>cups;
    m=pay*cups;
    cout<<"Do you want other menu?(Y/N):";
    cin>>want;
    if(want=='Y'||want=='y'){
    cout<<"Enter your menu(E/A/L/C/M) :";
    cin>>me;
    continue;
    }
    else
    break;
    }
    if(me=='L'||me=='l')
    {
    cout<<"Enter size(S/T/G/V) :";
    cin>>size;
    if(size=='s'||size=='S')
    pay=50;
    if(size=='t'||size=='T')
    pay=60;
    if(size=='g'||size=='G')
    pay=70;
    if(size=='v'||size=='V')
    pay=80;
    cout<<"How many cups? :";
    cin>>cups;
    a=pay*cups;
    cout<<"Do you want other menu?(Y/N):";
    cin>>want;
    if(want=='Y'||want=='y'){
    cout<<"Enter your menu(E/A/L/C/M) :";
    cin>>me;
    continue;
    }
    else
    break;
    }
    if(me=='C'||me=='c')
    {
    cout<<"Enter size(S/T/G/V) :";
    cin>>size;
    if(size=='s'||size=='S')
    pay=50;
    if(size=='t'||size=='T')
    pay=60;
    if(size=='g'||size=='G')
    pay=70;
    if(size=='v'||size=='V')
    pay=80;
    cout<<"How many cups? :";
    cin>>cups;
    b=pay*cups;
    cout<<"Do you want other menu?(Y/N):";
    cin>>want;
    if(want=='Y'||want=='y'){
    cout<<"Enter your menu(E/A/L/C/M) :";
    cin>>me;
    continue;
    }
    else
    break;
    }
    if(me=='M'||me=='m')
    {
    cout<<"Enter size(S/T/G/V) :";
    cin>>size;
    if(size=='s'||size=='S')
    pay=60;
    if(size=='t'||size=='T')
    pay=70;
    if(size=='g'||size=='G')
    pay=80;
    if(size=='v'||size=='V')
    pay=90;
    cout<<"How many cups? :";
    cin>>cups;
    c=pay*cups;
    cout<<"Do you want other menu?(Y/N):";
    cin>>want;
    if(want=='Y'||want=='y'){
    cout<<"Enter your menu(E/A/L/C/M) :";
    cin>>me;
    continue;
    }
    else
    break;
    }
    }
    cout<<"Are you a memmber? (Y/N) :";
    cin>>mem;
    if(mem=='Y'||mem=='y')
    { 
    total=j+m+a+b+c;                     
    r=(total*10)/100;
    cout<<"Total "<<total<<" Baht"<<endl;
    cout<<"Discount "<<r<<" Baht"<<endl;
    cout<<"You pay "<<(total-r)<<" Baht"<<endl;
    cout<<"Thank you"<<endl;
    }
    if(mem=='N'||mem=='n')
    {
    total=j+m+a+b+c; 
    cout<<"Total "<<total<<" Baht"<<endl;
    cout<<"Discount "<<0<<" Baht"<<endl;
    cout<<"You pay "<<total<<" Baht"<<endl;
    cout<<"Thank you"<<endl;
    }
    
    
system("pause");
return 0;
}
