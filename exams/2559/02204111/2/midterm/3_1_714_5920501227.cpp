// 5920501227 wannada pitiyakulchorn
#include <iostream>      
using namespace std;
int main ()
{

float x,y,h,m;
int p;

cout<< "Arrival time : ";
cin>> x;
cout << "Leave time : ";
cin>> y;

if (y-x>0)
{
    h = ((y*60)-(x*60))/60;
    m = ((y*60)-(x*60))/60;
cout << int(h) <<" hours and " << ((m*100)-(int)h*100)-40 << " minutes "<<endl;  //((m*100)-(int)h*100)-40 

if (y-x<4)
 cout<< "You have to pay  0 bath" << endl;
else if (y-x>=4&&y-x<=7)
     { p= (int)h*10; 
       cout<< "You have to pay " << p << " bath ";
     }
else if (y-x>7&&y-x<=8)
     { p= (int)h*50; 
       cout<< "You have to pay " << p << " bath ";
     }       
else
     cout << "You have to pay " << 500 << " bath ";
}
else
cout<< "You can't leave before arrival time"<< endl;
    
    system ("pause");
    return 0;
}
 
