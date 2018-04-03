#include <iostream>
#include <cmath>
using namespace std;
int main()
{
char a,b,c,d,e,n;
int x;
  cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
  
  cout<<"Enter your menu (E/A/L/C/M):";
  cin>>a;
  cout<<"Enter size (S/T/G/V) :";
  cin>>b;
  cout<<"How many cups? :";
  cin>>x;
  cout<<"Do you want other menu? (Y/N):";
  cin>>c; 
  cout<<"Are you a member? (Y/N):";
  cin>>d;
  if(a=='E'||a=='A')
  {
    if(b=='S')
     n==x*40;
    else if (b=='T')
     n==x*50;
    else if (b=='G')
     n==x*60;
    else if (b=='V')
     n==x*70;
  }
  if(a=='C'||a=='L')
  {
    if(b=='S')
     n==x*50;
    else if (b=='T')
     n==x*60;
    else if (b=='G')
     n==x*70;
    else if (b=='V')
     n==x*80;
  }
  if(a=='M')
  {
    if(b=='S')
     n==x*60;
    else if (b=='T')
     n==x*70;
    else if (b=='G')
     n==x*80;
    else if (b=='V')
     n==x*90;
  }
  cout<<"Total"<<n<<"Baht"<<endl;
  cout<<"Discount"<<"Baht"<<endl;
  cout<<"You pay"<<"Baht"<<endl;
  cout<<"Thank you."<<endl; 
     
system ("pause");
return 0;
}
