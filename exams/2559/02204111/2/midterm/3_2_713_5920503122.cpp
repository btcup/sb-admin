//5920503122 Tarit  likhitpinyo
#include <iostream>
using namespace std;
int main()
{
    float n=0,sum=0;
    int x[5],y[5];
    
    
    cout<<"Enter electricity cost per unit (bath): ";
    cin>>n;
    
    
    while(n>0)
    {
              cout<<endl;
              cout<<"Enter last unit: ";
              cin>>x[5];
                      if(x[5]==-1&&y[5]==-1)
                      {
                          cout<<"-- End of Calculation --"<<endl;break;
                      }
                      else if(x[5]<0&&x[5]!=-1)
                      {
                           cout<<"Invalid last unit!"<<endl;continue;
                      }
              cout<<"Enter current unit: ";
              cin>>y[5];
                      if(x[5]>y[5])
                      {
                           cout<<"Invalid current unit!"<<endl;continue;
                      }
                      else if(y[5]<0&&y[5]!=-1)
                      {
                           cout<<"Invalid current unit!"<<endl;continue;
                      }
              cout<<"Unit used = "<<y[5]-x[5]<<endl;
              cout<<"Electricity charge (bath) = "<<(y[5]-x[5])*n<< endl;
              cout<<endl;
              sum+=((y[5]-x[5])*n);
              
    }

    cout<<"Total of Electricity charge (bath) = "<<sum<<endl;
    system("pause");
    return 0;
}
