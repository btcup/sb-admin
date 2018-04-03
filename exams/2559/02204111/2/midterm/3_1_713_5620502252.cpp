//5620502252 Itthinan Boonmee

#include<iostream>
#include<cmath>
using namespace std ;
int main()
{
    float A,L;
    double sum1=0,sum2=0,bath=0;
    
        cout<<"Arrival time:";
        cin>>A;
        cout<<"Leave time:";
        cin>>L;
           
if(L>0){
               if(L<=3.14){
                   bath=0;
            }
                   else if(L>=3.15,L<=6.14){
            bath=20;
            }
            else if(L>=6.14,L<=8.14){
            bath=50;
            }
            else if(L>=8.15){
            bath=500;
            }
            sum1=(L-A);
            sum2=sum1*bath;
            cout<<sum1<<"hours"<<endl;
            cout<<"You have  to pay"<<sum2<<endl;
}
else
cout<<"You can't leave before arrival time"<<endl;
           
  

system ("pause");
return 0;
}
