//5620502155 Wittaya Phanthipsak
#include<iostream>
using namespace std;
int main()
{
    char a,car,motorcycle;
    double time1=0,time2=0;
    double sum1,sum=0,baht=0;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
    cin>>a;
    cout<<"Arrival time:";
    cin>>time1;
    cout<<"leave time:";
    cin>>time2;
    sum=time2-time1;
    cout<<sum<<"hours"<<endl;
    
    if(a=='car'||a=='motorcycle')
    {     
         if(a=='motorcycle')
         {
              if(a<=3)
              {
                   baht=0; 
                   cout<<"You have to pay 0 baht";
              }
              else if (a=4&&a<=7)
              {
                   baht=10; 
              }
              else if (a>7)
              {
                   baht=150; 
              }
         }
         
         else if(a=='car')
         {
              if(a<=2)
              {
                   baht=0; 
                   cout<<"You have to pay 0 baht";
              }
              else if (a=3&&a<=5)
              {
                   baht=30; 
              }
              else if (a=6&&a<=8)
              {
                   baht=50; 
              }
              else if (a>8)
              {
                   baht=500; 
              }
         }
          
   }     

    system("pause");
    return 0;
}
    
