#include<iostream>
using namespace std;
int main()
{   float a;
     int s,t;
     float y;
     float sum=0;
    cout<<"Enter electricity cost per unit";
    cin>>a;
    do{
           cout<<"Enter last unit";
           cin>>s;
           
           if(s>99999)
           cout<<"invalid last unit"<<endl;continue;
           if(s<0)
           cout<<"invalid last unit"<<endl;continue;
           if(s==-1) break;
           cout<<"Enter current unit";
           cin>>t;
           if(t==-1)break;
           if(t>99999)
           cout<<"invalid current unit"<<endl;continue;
            if(t<0)
           cout<<"invalid current unit"<<endl;continue;
           if(t<s)
           cout<<"invalid current unit"<<endl;continue;
           if(s<99999&&s<0&&t>99999&&t>0&&t>s)
           cout<<"unit used = "<<t-s<<endl;
           y=(t-s)*a;

           cout<<"electricity charge (baht)"<<y<<endl;
          sum=int(sum);
          sum = sum+y;
          
     }
    while(s>=0);
    cout<<"--End of Calculation--"<<endl;
    cout<<"total electricity charge(baht) = "<<sum<<endl;
    system("pause");
    return 0;
    
    }
