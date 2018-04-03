//Pakkapong  Arkornchee  5920502495
#include<iostream>
using namespace std;
int main()
{
    float u,t,a=0;
    int l,c;
    do
    {
      cout<<"Enter electricity cost per unit (bahths) : ";
      cin>>u;    
    }while(u<=0);
    do
    {
      cout<<endl;
      cout<<"Enter last unit : ";
      cin>>l;
      if(l==-1)
      {
             cout<<"-- End of Calculation --"<<endl;
             break;
      }
      if(l<-1||l>100000)
      {
             cout<<"Invalid last unit!"<<endl;
             continue;
      }
      cout<<"Enter current unit : ";
      cin>>c;
      
      if(c==-1)
      {
             cout<<"-- End of Calculation --"<<endl;
             break;
      }
      if(c<-1||c>100000)
      {
             cout<<"Invalid current unit!"<<endl;
             continue;
      }
      cout<<"Units used = "<<c-l<<endl;
      t=(c-l)*u;
      a=a+t;
      cout<<"Electricity charge (bahts) = "<<t<<endl;
    }while(l>-1||c>-1);
    cout<<endl;
    cout<<"Total of Electricity charge (bahts) = "<<a<<endl;
    system("pause");
    return 0;
    
}    
