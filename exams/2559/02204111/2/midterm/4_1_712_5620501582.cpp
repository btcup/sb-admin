//5620501582 Nutthaya Chusinkul
#include<iostream>
using namespace std;
int main()
{
 float ti , to , p ,h ; 
 int t ,Ti ,To ;
 char a;
 cout << "Type of Vehicle ((C)Car or (M)Motorcycle: " ;
 cin >> a ;
 if(a=='c'||a=='C')
 {
 cout << "Arrival time: " ;
 cin >> ti ;
 cout << "Leave time: " ;
 cin >> to ;
     if (to<ti)
        {cout<< "You can't leave before arrival time" <<endl;}
     else
         {
         h = to-ti ;
         To=to*100;
         Ti=ti*100;
         t=abs((To%100)-(Ti%100));
        
         cout << int(h) << " hours and " << t << " minutes." << endl;
         if(h<=2)
         {
                 cout << "You have to pay 0 bath." << endl; 
         }
         else if(2<h<=5)
              {
               p=h*30;
               cout << "You have to pay " << p << " bath." << endl;
              }
         else if(6<h<=8)
              {
               p=h*50;
               cout << "You have to pay " << p << " bath." << endl;
              }
         else if(h<8)
              {
               cout << "You have to pay 500 bath." << endl;
              }
         }                
 }
 else if (a=='m'||a=='M')
 {
 cout << "Arrival time: " ;
 cin >> ti ;
 cout << "Leave time: " ;
 cin >> to ;
     if (to<ti)
        {cout<< "You can't leave before arrival time" <<endl;}
     else
         {
         h = to-ti ;
         To=to*100;
         Ti=ti*100;
         t=abs((To%100)-(Ti%100));
        
         cout << int(h) << " hours and " << t << " minutes." << endl;
         } 
      if(h<=3)
         {
                 cout << "You have to pay 0 bath." << endl; 
         }
         else if(3<h<=7)
              {
               p=h*10;
               cout << "You have to pay " << p << " bath." << endl;
              }
      
         else if(h<7)
              {
               cout << "You have to pay 150 bath." << endl;
              }
                                        
 }
    
    system("pause");
    return 0;
}
