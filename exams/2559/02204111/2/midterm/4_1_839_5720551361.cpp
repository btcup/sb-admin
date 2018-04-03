//5720551361 Nuttanon Inpoomes
#include<iostream>
using namespace std;
int main()
{
    int pay,hour,x;
    float a,i;
    char type;
    cout<<"Type of vehicle((C)Car or (M)Motorcycle) : " ;
    cin>>type;
    cout<<"Arrival time : " ;
    cin>>a;
    cout<<"Leave time : " ;
    cin>>i;
    
    if(type=='C')
       {
        if(hour<=2)
          pay = 0 ;
        if(hour<=5)
          pay = 30 ;
        if(hour<=8)
          pay = 80 ;
        if(hour<8)
          pay = 500 ;
       }
   else if(type=='M')
       {
        if(hour<=3)
           pay = 0 ;
        if(hour<=7)
           pay = 10 ;
        if(hour>7)
           pay = 150 ;   
       }  
  {
     cout<<(int(i-a))<<"hour and "<<"minute"<<endl;
   cout<<"You have to pay"<<((int(i-a))*pay)<<"bath"<<endl;
   }
   {
 if(hour<60)
   cout<<"You can't leave before arrival time"<<endl;   
}
    system("pause");
    return 0;
}
