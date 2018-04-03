//5920550279 Sukanda Sisun
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float u,sum=0,b;
    int x,y,a,i=1;
    do{
    cout<<"Enter electricity cost per unit (bahts): ";
    cin>>u;
    }while(u<0);
    do
    {
    cout<<"enter last unit: ";
    cin>>x;
    if(x>=0&&x<10000)
    {
     cout<<"enter last unit: ";
     cin>>y;
        if(y>=0&&y<10000)
        {
          a=abs(x-y);
          b=a*u;
          cout<<"Units used="<<a<<endl;
          cout<<"Electricity charge(bahts) ="<<sum<<endl;
          sum=sum+sum;
        }
        else if(y==-1)
              break;
             else
              cout<<"Invalid last unit!"<<endl;
     }
     else if(x==-1)
           break;
          else
           cout<<"Invalid last unit!"<<endl;
    }while(i);
    cout<<"--End of calculation--"<<endl;
    cout<<"Total of Electricity charge (bahts)="<<sum<<endl;
    system("pause");
    return 0;
}

    
