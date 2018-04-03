#include<iostream>
using namespace std;
int main()
{
    char a,b,d,f;
    int cup,q=1;
    float sum=0,discount=0;
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    while(q>=1)
    {
    cout<<"Enter your menu (E/A/L/C/M): ";
    cin>>a;
    if(a=='e'||a=='E')
    {
                      sum=sum+40;
                      }
    else if(a=='a'||a=='A')
    {
                      sum=sum+40;
                      }
    else if(a=='c'||a=='C')
    {
                      sum=sum+50;
                      }
    else if(a=='l'||a=='L')
    {
                      sum=sum+50;
                      }
    else if(a=='m'||a=='M')
    {
                      sum=sum+60;
                      }
    cout<<"Enter size(S/T/G/V): ";
    cin>>b;
    if(b=='s'||b=='S')
    {
                      sum=sum+0;
                      }
    else if(b=='t'||b=='T')
    {
                      sum=sum+10;
                      }
    else if(b=='g'||b=='G')
    {
                      sum=sum+20;
                      }
    else if(b=='v'||b=='V')
    {
                      sum=sum+30;
                      }
    cout<<"How many cups?: ";
    cin>>cup;
    sum=sum*cup;
    cout<<"Do you want other menu?(Y/N): ";
    cin>>d;
    if(d=='y'||d=='Y')
    {
                      q=q+1;
                      }
    else if(d=='n'||d=='N')
    {
                      q=0;
                      }
}
    cout<<"Are you a member?(Y/N): ";
    cin>>f;
    if(f=='y'||f=='Y')
    {
                      discount=sum*10/100;
                      }
    else if(f=='n'||f=='N')
    {
                      discount==0;
                      }
    cout<<"Total "<<sum<<" Baht"<<endl;
    cout<<"Discount "<<discount<<" Baht"<<endl;
    cout<<"You pay "<<sum-discount<<" Baht"<<endl;
    cout<<"Thank you."<<endl;
    system("pause");
    return 0;
}
