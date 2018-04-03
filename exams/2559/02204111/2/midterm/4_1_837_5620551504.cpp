#include<iostream>
//5620551504 Teechawhichs paarethaanon
using namespace std;
int main()
{
    char A;
    double a,b,c,d;
    cout<<"Type of vehicle ((C)car or (M)Motorcycle:";
    cin>>A;
    cout<<"Arrival time:";
    cin>>a;
    cout<<"Leave time:";
    cin>>b;
    if(a>0&&b>0&&b>a)
    {
    if(A=='M')
               {
                 if(c>=0)
                  {
                    c=b-a;
                    cout<<c<<"hours";
                     
                  }
                  if(d>=1&&d>=3)
                {
                              d=(b-a)*0;
                              cout<<"You have to pay"<<d<<"bath"<<endl;
                }
               }
               
               
    }
    else
    {
        cout<<"You can't leave before arrival time"<<endl;
    }
    if(a>0&&b>0&&b>a)
    {
     if(A=='C')
     
    {
          if(c>0)
         {
                c=b-a;
                cout<<c<<"hours"<<endl;
         }
    }
   } 
   
   
   
    
         
             
             
             
             
             
             
             
             
             
             
             
    system("pause");
    
}
