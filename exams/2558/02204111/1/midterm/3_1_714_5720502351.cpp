#include<iostream>
using namespace std;
int main()
{
    char a;
    int x,y,sum;
    
    cout<<"Are you member (Y or N): ";  cin>>a;
    cout<<"How old are you?: ";         cin>>x;
    cout<<"Normal price : ";            cin>>y;
    
    if(a=='Y')
     {
      if(x<2)                sum=0;
      else if(x>=2&&x<=12)   sum=y-((70*y)/100);
      else                   sum=y-((50*y)/100);
     }
    else
     {
      if(x<2)                sum=0;
      else if(x>=2&&x<=10)   sum=y-((50*y)/100);
      else                   sum=y;
     }
     
    cout<<"You have to pay "<<sum<<endl;
       
 system ("pause");
 return 0;   
}
