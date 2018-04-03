#include <iostream> //5620550630 peerayut
using namespace std;
int main()
{
    float x,y,z,sum;
    int u=0,lu=0,cu=0;
    cout<<"Enter Electricity cost unit (bahts): ";
    cin>>x;
    while (x<=0)
    {
    cout<<"Enter Electricity cost unit (bahts): ";
    cin>>x;
    }
    while (1)
    {
          cout<<"\nEnter last unit: ";
          cin>>lu;
          if(lu==-1)
          {
          cout<<" -- End of calculation -- "<<endl<<"\n";
          cout<<"total of Electricity charge (bahts) = "<<sum<<endl;
                     break;
          }
          cout<<"Enter current unit: ";
          cin>>cu;
          u=cu-lu;
          if(u<0){
          cout<<"invavid current unit";
          }
          else
          {
          cout<<"unit used = "<<u<<endl;
          z=x*u;
          sum=sum+z;
          cout<<"Electricity charge (bahts) = "<<z<<endl;
          }
          
    }    
system("pause");
return 0;
}
    
