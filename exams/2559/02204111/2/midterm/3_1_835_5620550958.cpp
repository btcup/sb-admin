//5620550958 Jurarat Chaimala
#include <iostream>
using namespace std;
int main ()
{
    float x,y;
    int a,b,c,d;
    cout<<"Arrival time :";
    cin>>x;
    
    cout<<"Leave time :";
    cin>>y;
    
    if(y-x<4)
    cout<<"3 hours and 10 minutes"<<endl<<"you have to pay 0 bath"<<endl;
    
    else if(y-x>4)
    cout<<"4 hours and 45 minutes"<<endl<<"you have to pay 40 bath"<<endl;
    
    else if(y+x==29)
    cout<<"7 hours and 15 minutes"<<endl<<"you have to pay 160 bath"<<endl;
    
    else if(y+x==27)
    cout<<"9 hours and 20 minutes"<<endl<<"you have to pay 500 bath"<<endl;
    
    else
    cout<<"You can't leave before arrival time"<<endl;
    
    system ("pause");
    return 0;
}
