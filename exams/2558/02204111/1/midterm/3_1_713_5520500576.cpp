#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,c,z;
    char a;
    cout<<"are you member(Y or N)"<<endl;
    cin>>a;
    cout<<"how old are you?"<<endl;
    cin>>x;
    cout<<"normal price:"<<endl;
    cin>>c;
    if(a=='y'||a=='Y')
    {
                  if(x<2)
                  {
                         cout<<"you have to pay"<<0<<endl;
                  }
                  else if(x>2&&x<=12)
                  {
                         cout<<"you have to pay"<<c-(c*0.7)<<endl;
                  }
                  else if(x>12)
                  {
                         cout<<"you have to pay"<<c-(c*0.5)<<endl;
                  }
    }
    else
    {  
                  if(x<2)
                  {
                         cout<<"you have to pay"<<0<<endl;
                  }
                  else if(x>2&&x<=10)
                  {
                       
                         cout<<"you have to pay"<<c-(c*0.5)<<endl;
                  }
                  else if(x>10)
                  {
                         cout<<"you have to pay"<<c<<endl;
                  }
    }
     system("pause");
     return 0;
}      
     
                       
                       
                       
                       
                       
                       
                       
                       
                       
