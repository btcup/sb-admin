// 5920501286 Onuma Intasang
#include <iostream>
using namespace std;
int main()
{
    char size,pice;
    int x,y,h,m,A,L;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
    cin>>size;
    cout<<"Arrival time :";
    cin>>x;
    cout<<"Leave time :";
    cin>>y;
    
    cout<<y-x<<"hours and"<<0<<"minutes"<<endl;
    
    if(h>=3&&m<=5)
    pice=h*m;
    cout<<"You have to pay "<<pice<<"bath";
    
    
    
    
    
    system ("pause");
    return 0;
}
 
