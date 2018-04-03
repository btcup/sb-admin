#include<iostream>
using namespace std;
int main()
{
 char 'A','B','C','D';
 int q=12,w=24,e=36,r=48,t=60,u=72;
 double d=0.25,m,s,y,f,a,p;
 cout<<"-------Car lease calculator-------";
 cout<<"Enter car model: ";
   cin>>m;
 cout<<"Enter number of year (1-6): "; 
  cin>>y;  
 cout<<"Enter your salary: ";
  cin>>s;
  cout<<"---------------------------------";
  if(char=='A')
  {
  f=1385000*d;
  cout<<"Financing amount: "<<f;
  a=(f*2.09*y)/100;
  cout<<"Amount of interest: "<<a;
   if(y==1)
   {
   p=(f+a)/q;
   else if(y==2)
   p=(f+a)/w;
   else if(y==3)
   p=(f+a)/e;
   else if(y==4)
   p=(f+a)/r;
   else if(y==5)
   p=(f+a)/t;
   else  if(y==6)
   p=(f+a)/u;
   cout<<"Monthly payment: "<<p;
   }
  }
  else if(char=='B')
  {
  f=511500*d;
  cout<<"Financing amount: "<<f;
  a=(f*1.79*y)/100;
  cout<<"Amount of interest: "<<a;
   if(y==1)
   {
   p=(f+a)/q;
   else if(y==2)
   p=(f+a)/w;
   else if(y==3)
   p=(f+a)/e;
   else if(y==4)
   p=(f+a)/r;
   else if(y==5)
   p=(f+a)/t;
   else  if(y==6)
   p=(f+a)/u;
   cout<<"Monthly payment: "<<p;
   }
  } 
  else if(char=='D')
  {
  f=738000*d;
  cout<<"Financing amount: "<<f;
  a=(f*1.99*y)/100;
  cout<<"Amount of interest: "<<a;
   if(y==1)
   {
   p=(f+a)/q;
   else if(y==2)
   p=(f+a)/w;
   else if(y==3)
   p=(f+a)/e;
   else if(y==4)
   p=(f+a)/r;
   else if(y==5)
   p=(f+a)/t;
   else  if(y==6)
   p=(f+a)/u;
   cout<<"Monthly payment: "<<p;
   }
  }
  else if(char=='J')
  {
  f=694000*d;
  cout<<"Financing amount: "<<f;
  a=(f*1.99*y)/100;
  cout<<"Amount of interest: "<<a;
   if(y==1)
   {
   p=(f+a)/q;
   else if(y==2)
   p=(f+a)/w;
   else if(y==3)
   p=(f+a)/e;
   else if(y==4)
   p=(f+a)/r;
   else if(y==5)
   p=(f+a)/t;
   else  if(y==6)
   p=(f+a)/u;
   cout<<"Monthly payment: "<<p;
   }
  }
  if(p>(s/2))
  cout<<"The monthly payment is over than 50% of your salary!!";
  else cout<<"Good decision, Enjoy your new car";
    system("pause");
    return 0;
    }
