#include <iostream>
using namespace std;
int main ()
{
    char x;
    cout<<"Are you member(Y or N):";
    cin>>x;
   int a,b,c;
    
    if(x=='Y')
  {
        if(a<2&&a>=0)
       { 
        cout<<"you have to pay ";
        cout<<(2000*0/100)<<endl;
        else if(a>=2&&a<=12)   
           cout<<"you have to pay ";
           cout<<(2000*30/100)<<endl;
       }
        else
           cout<<"you have to pay ";
           cout<<(2000*50/100)<<endl;
  }     
   
       if(x=='N')
   {
          if(b<2&&b>=0)
        {   
          cout<<"you have to pay ";
          cout<<(5000*0/100)<<endl; 
          else if(b>=2&&b<=10)
          cout<<"you have to pay ";
          cout<<(5000*50/100)<<endl;
        }
        else
          cout<<"you have to pay ";
          cout<<(5000*100/100)<<endl;
  }
    
   system("pause");
   return 0;
}
   
        
          
      
    
          
