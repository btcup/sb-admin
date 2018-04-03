#include <iostream>
using namespace std;
int main()
{
  
  int s,k,o,m,a,b,c,h,d;
  double p,t;
 
  cout<<"Welcome to the Fantastic Tiles!!"<<endl;
  cout<<"Please enter room size in meter (HxWxD):" ;
  cin>>s;
  cout<<"Please select floor tile....(A/B/C)";
  cin>>m;
  cout<<"Please select wall tile...(A/B/C)";
  cin>>k;
  
  cout<<"Number of foor tiles :";
  cin>>o;
  if(m==a)
  {
          p=55*o;
  }
  else if(m==b)
  {
       p=80*o;
  }
  else if(m==c)
  
  
  
  {
       p=90*o;
  }
  
  
 cout<<"Price="<<p<<" baht"<<endl;
 
 
 cout<<"Number of wall tile:";
 cin>>d;
 if(d==a)
 {
         h=17*d;
 }
 else if(d==b)
 {
      h=32*d;
 }
  else if(d==c)
  {
       h=50*d;
  }
  
  
  t=p+h;
  cout<<"total price :"<<p<<"+"<<h<<"= "<<t<<"  baht"<<endl;
  
  
  
    
  
 system("pause");
return 0;    
}
