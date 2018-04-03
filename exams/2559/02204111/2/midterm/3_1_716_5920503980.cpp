//5920503980 Napassorn Thanaphatpsutthimet
#include <iostream>
using namespace std;
int main()
{float a,l,t,m,n,s;
cout<<"Arrival time : ";
cin>>a;
cout<<"Leave time : ";
cin>>l;
s=l-a;
m=s*60;
n=s%
t=(m+n)-180;
     if (t>=1&&t<=3)
     {
       cout<< m <<" hours and "<< n <<" minutes" <<endl; 
     cout<<"You have to pay 0 bath"<<endl;
     }
     else if (t>=4&&t<=6)
     {
          cout<< m <<" hours and "<< n <<" minutes" <<endl;
     cout<<"You have to pay "<<(t*20)<<" bath"<<endl;
     }
     else if (t>=7&&t<=8)
     { 
          cout<< m <<" hours and "<< n <<" minutes" <<endl;
          cout<<"You have to pay "<<(t*50)<<" bath"<<endl;
          }
          else if (t>8)
          { 
               cout<< m <<" hours and "<< n <<" minutes" <<endl;
               cout<<"You have to pay 500 bath"<<endl;
               }
               else cout<<"You can't leave before arrival time"<<endl;
    system("pause");
    return 0;
}
