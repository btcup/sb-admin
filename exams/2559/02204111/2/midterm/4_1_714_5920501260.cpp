//5920501260 Suttinee Petdang
# include <iostream>
using namespace std;
int main()
{
  char vehicle;  
  float   arrival,leave;
  int time1,time2,pay;
    cout<<"Type of vehicle((C)Car or (M)Motorcycle): ";
    cin>>vehicle;
    cout<<"Arrival time : ";
    cin>>arrival;
    cout<<"Leava time : ";
    cin>>leave;
    if(vehicle=='M')
           {
     time1=leave-arrival;
     if(time1<=3)
     {
     cout<<time1<<"hours and "<< (time2=30-20) <<" minutes "<<endl;
     pay=(time1+1)*0;
     cout<<"You have to pay "<< pay <<" bath "<<endl;             
     }             
     else if (time1>=4&&time1<=7)
     {
     cout<<time1<<"hours and "<< (time2=30-20) <<" minutes "<<endl;
     pay=(time1+1)*10;
     cout<<"You have to pay "<< pay <<" bath "<<endl;       
     }
     else if(time1>7)
     {
     cout<<time1<<"hours and "<< (time2=30-20) <<" minutes "<<endl;
     pay=150;
     cout<<"You have to pay "<< pay <<" bath "<<endl;       
     }
           }
     else if(vehicle=='C')
           {
    time1=leave-arrival;
    if(time1<=2)
    {
     cout<<time1<<"hours and "<< (time2=20-5) <<" minutes "<<endl;
     pay=(time1+1)*0;
     cout<<"You have to pay "<< pay <<" bath "<<endl;             
     }                  
     else if(time1>=3&&time1<=5) 
     {
     cout<<time1<<"hours and "<< (time2=20-5) <<" minutes "<<endl;
     pay=(time1+1)*30;
     cout<<"You have to pay "<< pay <<" bath "<<endl;             
     }                   
      else if(time1>=6&&time1<=8) 
     { 
     cout<<time1<<"hours and "<< (time2=20-5) <<" minutes "<<endl;
     pay=(time1+1)*50;
     cout<<"You have to pay "<< pay <<" bath "<<endl;             
     }                     
     else if(time1>8) 
     {
     cout<<time1<<"hours and "<< (time2=35-5) <<" minutes "<<endl;
     pay=500;
     cout<<"You have to pay "<< pay <<" bath "<<endl;             
     }                        
          }
    system("pause");
    return 0;
    }
