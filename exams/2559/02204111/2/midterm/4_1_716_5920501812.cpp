//5920501812 Udomsak Jaihan
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char type;
    double arrival,sum,arrival1,leave,total;
    int arrival2,sum1;
    cout<<"Type of vehical ((C)Car or (M)Motorcycle): ";
    cin>>type;
    
    cout<<"Arrival time : ";
    cin>>arrival;
    cout<<"Leave time : ";
    cin>>leave;
    sum=leave-arrival;
     sum1= ceil(sum);
    if (type=='C')
    {             
                  
                  if(sum1<=2&&sum1>0)
                           total=sum1*0;
                  else if (sum1>2||sum1<=5)
                           total=sum1*30;
                  else if (sum1>5||sum1<=8)
                           total=sum1*50;
                  else
                           total=500;
    }
    else if (type=='M')
    {             
                  if(sum1<=3&&sum1>0)
                           total=sum1*0;
                  else if (sum1>3||sum1<=7)
                           total=sum1*10;
                  else
                           total=150;
    }
    if (sum1>0)
    {
    arrival1= sum1*100/60;
    arrival2= int(sum1)%60;
    
    cout<<arrival1<<" hour and "<<arrival2<<" minutes"<<endl;               
    cout<<"You have to pay "<<total<<" bath"<<endl;
    }
    else
        cout<<"You can't leave before arrival time"<<endl;
    
    system("pause");
    return 0;
}
