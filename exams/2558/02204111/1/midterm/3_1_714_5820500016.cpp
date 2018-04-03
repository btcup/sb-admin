#include<iostream>
using namespace std;
int main()
{
    int i,pr,ye;
    double sum=0;
    char mem;
    cout<<"Are you member (Y or N) : ";
    cin>>mem;
    cout<<"How old are you ? : ";
    cin>>ye;
    cout<<"Normol price : ";
    cin>>pr;
     if(mem=='Y')
     {
         if(ye<2&&ye>0)
            sum=0;
         else if(ye>=2&&ye<=12)
            sum=pr-pr*70.0/100.0;
         else
            sum=pr-pr*50.0/100.0;
     }
     else if(mem=='N')
     {
          if(ye<2&&ye>0)
            sum=0;
         else if(ye>=2&&ye<=10)
            sum=pr-pr*50.0/100.0;
         else
            sum=pr;
     }
     cout<<"\nYou have to pay "<<sum<<endl;
system("pause");
return 0;
}
