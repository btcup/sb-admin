#include <iostream>
using namespace std;
int main ()
{
    int c;
    char a,b,d,e,f;
    double sum,h,pay,dis,z;
    
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    cout<<"Enter your menu (E/A/L/C/M) : ";
    cin>>a;
    cout<<"Enter size (S/T/G/V) : ";
    cin>>b;
    cout<<"How many cups? : ";
    cin>>c;
    cout<<"Do you want other menu? (Y/N) : ";
    cin>>d;
    
     while(d=='y'||d=='Y'){
     cout<<"Enter your menu (E/A/L/C/M) : ";
    cin>>a;
    cout<<"Enter size (S/T/G/V) : ";
    cin>>b;
    cout<<"How many cups? : ";
    cin>>c;
    cout<<"Do you want other menu? (Y/N) : ";
    cin>>d;}
    
    cout<<"Are you remember? (Y/N) :";
    cin>>f;
     
     if(a=='e'||a=='E')
     {
        if(b=='s'||b=='S')h=40;
        else if(b=='t'||b=='T')h=50;
        else if(b=='g'||b=='G')h=60;
        else if(b=='v'||b=='V')h=70;
     }
     else if(a=='a'||a=='A')
     {
        if(b=='s'||b=='S')h=40;
        else if(b=='t'||b=='T')h=50;
        else if(b=='g'||b=='G')h=60;
        else if(b=='v'||b=='V')h=70;
     }
     else if(a=='C'||a=='c')
     {
        if(b=='s'||b=='S')h=50;
        else if(b=='t'||b=='T')h=60;
        else if(b=='g'||b=='G')h=70;
        else if(b=='v'||b=='V')h=80;
     }
     else if(a=='l'||a=='L')
     {
        if(b=='s'||b=='S')h=50;
        else if(b=='t'||b=='T')h=60;
        else if(b=='g'||b=='G')h=70;
        else if(b=='v'||b=='V')h=80;
     }
     else if(a=='m'||a=='M')
     {
        if(b=='s'||b=='S')h=60;
        else if(b=='t'||b=='T')h=70;
        else if(b=='g'||b=='G')h=80;
        else if(b=='v'||b=='V')h=90;
     }
     
     if(f=='y'||f=='Y')z=0.1;
     
     cout<<h<<endl;
     cout<<c<<endl;
     sum=h*c;
     dis=sum*z;
     pay=sum-dis;
     cout<<"Total"<<sum<<"Baht"<<endl;
     cout<<"Discount"<<dis<<"Baht"<<endl;
   cout<<"You pay "<<pay<<"Baht"<<endl;
   cout<<"Thank you"<<endl;
    system ("pause");
    return 0;
}
