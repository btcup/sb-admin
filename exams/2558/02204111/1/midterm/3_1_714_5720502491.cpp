#include<iostream>
using namespace std;
int main()
{int y,z,sum,n;
char x;
sum=0;
    cout<<"Are you member (Y or N):";
               cin>>x; 
    cout<<"How old are you?:";
    cin>>y; 
   cout<<"Normal price:";
   cin>>z;
   
    if(x=='Y')
    { if(y<2) 
      sum=0;
      else if(y>=2&&y<=12)
        sum=z/100*30;
      else if(y>12)
      sum=z/2;}
    else
    {if(y<2)
     sum=0 ;
     else if(y>=2&&y<=10)
        sum=z/2;
      else if(y>10)
      sum=z;}
      cout<<"You have to pay "<<sum<<endl;
                    
    
   
   
    system("pause");
    return 0;
}
