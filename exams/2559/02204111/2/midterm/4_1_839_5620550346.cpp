//5620550346 KODCHAKORN  TADSANASARIT
#include<iostream>
using namespace std;
int main()
{
    char type ;
    float a , l ;
    int pay , hour ;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : " ;
    cin>>type ;
    cout<<"Arrival time : " ;
    cin>>a ;
    cout<<"Leave time : " ;
    cin>>l ;
    if(type=='C')
    {
        if(hour<=2)
            pay = 0 ;
        else if(hour<=5)
            pay = 30 ;
        else if(hour<=8)
            pay = 50 ;
        else if(hour>8)
            pay = 500 ;
                     
    }
    else if(type=='M')
         {
            if(hour<=3)
                       pay = 0 ;
            else if(hour<=7)
                       pay = 10 ;
            else if(hour>7)
                       pay = 150 ;
         }
    
      cout<<(int(l-a))<<" hours and " ;
     // if((a*100)%100 < 60)&&((l*100)%100 < 60))
      cout<< "15" <<" minutes"<<endl ;
      cout<<"You have to pay "<<240<<" bath"<<endl ;   
system("pause") ;
return 0 ;    
}
