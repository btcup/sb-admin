#include<iostream>
using namespace std;
int main()
{ int a,b;
  char x;
  cout<<"Are you member (Y or N): ";
  cin>>x;
  cout<<"How old are you?: ";
  cin>>a;
  cout<<"Normal price : ";
  cin>>b;
  
  switch (x)
  {
         case 'Y' :
  if(a>12)
  cout<<"You have to pay "<<b-b*0.5<<endl; 
  else if(a>=2&&a<=12)
  cout<<"You have to pay "<<b-b*0.7<<endl;
  else if(a<2)
  cout<<"You have to pay "<<b-b<<endl;
  }
  switch(x)
  case 'N':
   if(a>10)
  cout<<"You have to pay "<<b-b*0<<endl;
  else if(a>=2&&a<=10)
  cout<<"You have to pay "<<b-b*0.5<<endl;
  else if(a<2)
  cout<<"You have to pay "<<b-b<<endl;   
  

    
    
    
    
 system("Pause");
 return 0;   
}
