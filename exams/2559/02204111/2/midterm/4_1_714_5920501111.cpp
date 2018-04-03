//5920501111 Nongnapat Suboonsan
#include<iostream>
using namespace std;
int main ()
{
    double x,y,z,k,;
    char a;
    cout<<"Type of vehicle ((C)Car or (M)motorcycle) : ";
    cin>>a;
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    z=y-x;
    k=(z-(int)z)*100;
    if(a=='C'||a=='c')
    {
         if(z>0&&z<=2)
         {
               cout<<(int)z<<" houre and "<<k<<" minutes"<<endl;
               cout<<"You have to pay 0 bath "<<endl;
         }
         else if (z>=3&&z<=5)
         {
               cout<<(int)z<<" houre and "<<k<<" minutes"<<endl;
               cout<<"You have to pay "<<z*30<< " bath "<<endl;//
         }
         else if (z>=6&&z<=8)
         {
              cout<<(int)z<<" houre and "<<k<<" minutes"<<endl;
              cout<<"You have to pay "<<z*50<<" bath "<<endl;//
         }
         else if (z>8)
         {
              cout<<(int)z<<" houre and "<<k<<" minutes"<<endl;
              cout<<"You have to pay 500 bath "<<endl;
         }
         else
         {     
              cout<<endl;
              cout<<"You can't leaye before arrival time"<<endl; 
         }  
    }
    else if(a=='M'||a=='m')
    {
         if(z>0&&z<=3)
         {
              cout<<(int)z<<" houre and "<<k<<" minutes"<<endl;
              cout<<"You have to pay 0 bath "<<endl;
         }
         else if (z>=4&&z<=7)
         {    cout<<(int)z<<" houre and "<<k<<" minutes"<<endl;
              cout<<"You have to pay " <<z*10<<" bath "<<endl;//
         }
         else if (z>7)
         {
              cout<<(int)z<<" houre and "<<k<<" minutes"<<endl;
              cout<<"You have to pay 150 bath "<<endl;
         }
         else
         {
             cout<<endl;
              cout<<"You can't leaye before arrival time"<<endl;
         }     
    }
    system ("pause");
    return 0;
}
