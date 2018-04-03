//5920503203 Phanupong chayachet
#include<iostream>
using namespace std;
int main()
{
    float a,b,t;
    int n,p,q,;
    int r,u,o,z;
    cout<<"Arrivak time :";
    cin>>a;
    cout<<"Leave time :";
    cin>>b;
   n=(int(a)*100)/100;
   p=(int(b)*100)/100;
   u=int(a*100)%100;
   o=int(b*100)%100;
   r=(p-n)-(o-u);
   t=(b-a);
   z=t-t*100%100;
           if(t<0)
            {
                cout<<"You can't leave brfore arrival time"<<endl;}
           else if(t<=180)
           {
                    cout<<"You have to pay 0 bath "<<endl;
                    }
           else if(t>=240&&t<=360) 
           {
                    cout<<"You have to pay "<<20*t<<"bath" <<endl;
                    }
           else if(t>=420&&t<=780)
           {
                     cout<<"You have to pay"<<50*t<<"bath"  <<endl;                      
                     }
           else if(t>480)
           {
                    cout<<"You have to pay"<<500*t<<"bath"  <<endl;
                   }  
            else
            {
                cout<<"You can't leave brfore arrival time"<<endl;
            
            }
                       
           cout<<(p-n)<<"hours and "<<-(o-u)<<"minutes"<<endl; ;                    
cout<<u<<endl;
cout<<o<<endl;

    system ("pause");
    return 0;
}
    
