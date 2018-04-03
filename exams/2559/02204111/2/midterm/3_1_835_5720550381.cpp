#include <iostream>
using namespace std;
int main()
{  
    double x,y,a,z;
    cout<<"Arrival time:";
    cin>>x;
    cout<<"Leave time:";
    cin>>y;
    a=y-x;
    cout<<"   hours"<<a<<"  minutes"<<endl;
    if(a<=3)
    cout<< "You have to pay 0 bath" <<endl; 
    else
    {
         
         if(a>=4)
         z=a*20;
         else if(a>=7)
         z=a*50;
         else if(a>8)
         z=a*500;
         cout<< "You have to play:      "<<z<<"Bath"<<endl;
         
     }
	return 0;
}
 

