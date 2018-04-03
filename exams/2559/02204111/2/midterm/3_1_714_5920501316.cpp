//5920501316 Ketsinee Phanphlab
#include<iostream>
using namespace std;
int main()
{
    double h,a,p,n;
    cout<<"Arrival time:";
    cin>>h;
    cout<<"Leave time:";
    cin>>a;
  
    if(h>0.15==1||h<=0.15!=1) // 1hr==60s
    {
    
              n=a-h;
              cout<<n<<"hours"<<"and"<<n<<"minutes"<<endl;
              p=h*0;
              cout<<"You have to pay"<<" "<<p<<"  "<<"bath" <<endl;  
          if(h==3) 
          {
     
          }
          else if(h>=4&&h<=6)
          {
             
              n=a-h;
              cout<<n<<endl;
          }
          else if (h>=7&&h<=8)
         {
              p=h*40;
              cout<<"You have to pay"<<p<<"bath" <<endl;  
           }
    
    
    
     }
    
    
    
    
    system("pause");
    return 0;
    
    }
