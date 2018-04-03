//5920500140 Phoomipat Manitchotpisit
#include<iostream>
using namespace std;
int main()
{
    char a ;
    float x , y , z;
    cout<<"Type of vehicle((C)Car or (M)Motorcycle : " ;
    cin>> a;
    if (a=='C')
    {
       cout<<"Arrival time :" ;
       cin>> x ;
       cout<<"Leave time :" ;
       cin>> y ;
       z=y-x ;
       if (x<y)
       {
       if (z<=2)
       { cout<<int(z)<<"hours and "<<(z-int(z))*100<<"minutes"<<endl;
         cout<<"You have to pay 0 bath"<<endl;
         }
       else if(z>=3&&z<=5)
       { cout<<int(z)<<"hours and "<<(z-int(z))*100<<"minutes"<<endl;
         cout<<"You have to pay"<<int(z)*30<<"bath"<<endl;
         }
       else if(z>=6&&z<=8)
        { cout<<int(z)<<"hours and "<<(z-int(z))*100<<"minutes"<<endl;
         cout<<"You have to pay"<<int(z)*50<<"bath"<<endl;
         }
       else if(z>8)
        { cout<<int(z)<<"hours and "<<(z-int(z))*100<<"minutes"<<endl;
         cout<<"You have to pay 500 bath"<<endl;
         }
         }
       else
       cout<<"You can't leave before arrival time"<<endl;
    }
    else if(a=='M')
    {
       cout<<"Arrival time :" ;
       cin>> x ;
       cout<<"Leave time :" ;
       cin>> y ;
       z=y-x ;
       if (x<y)
       {
       if (z<=3)
       { cout<<int(z)<<"hours and "<<(z-int(z))*100<<"minutes"<<endl;
         cout<<"You have to pay 0 bath"<<endl;
         }
       else if(z>=4&&z<=7)
       { cout<<int(z)<<"hours and "<<(z-int(z))*100<<"minutes"<<endl;
         cout<<"You have to pay"<<int(z)*10<<"bath"<<endl;
         }
       else if(z>7)
        { cout<<int(z)<<"hours and "<<(z-int(z))*100<<"minutes"<<endl;
         cout<<"You have to pay 150 bath"<<endl;
         }
         }
       else 
       cout<<"You can't leave before arrival time"<<endl;
       }
system("pause") ;
return 0 ;
    
}
