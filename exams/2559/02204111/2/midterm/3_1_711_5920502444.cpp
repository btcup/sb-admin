//5920502444 Prathan Phoolakdan
#include<iostream>
using namespace std;
int main()
{
    int sum,z;
    float x,y;
    cout<<"Arrival time :";
    cin>>x;
    cout<<"Leave time :";
    cin>>y;
    z=y-x;
    if(z>0)
    {
           cout<<z<<" houres and"<<z<<" minutes " <<endl;
    }
    if(z>0)
    {
          if(z<=3)
          {
                  cout<<"You have to pay 0 bath "<<endl;
          } 
          else if(z<=6)
          {
                  sum=z*20;
                  cout<<"You have to pay  "<< sum<< " bath " <<endl;
          }
          else if (z<=8)
          {
               sum=z*50;
               cout<<" You have to pay  "<< sum <<"  bath " <<endl;
          }
          else if (z>=8)
          {
               sum=500;
               cout<<"You have to pay  " <<sum << " bath " <<endl;
          }
    }
    else
    cout<<"You can't leve before arrival time "<<endl;
    system ("Pause") ;
    return 0;
}
