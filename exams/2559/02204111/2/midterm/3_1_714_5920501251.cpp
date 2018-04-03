//5920501251 Wimonsiri Jaiong-art
#include <iostream>
using namespace std;
int main ()
{
    double a,l,m,h,x;
    cout<<"Arrival time : " ;
    cin>>a;
    cout<<"Leave time : ";
    cin>>l;
    if (a>l)
    cout<<"You can't leave before arrival time"<<endl;
    else 
    {
    h = l-a ;
    m = (h*60)-(int(h)*60);
    x=h-3;
    cout<<int(h)<<" hours and "<<m<<" minutes "<<endl;
    if (x<0)
    {
            cout<<"You have to pay 0 bath "<<endl;
    }
    else if (x>=1 && x<=3)
    {
            if (m<15)
            cout<<"You have to pay "<<x*20<<" bath "<<endl;
            else
            cout<<"You have to pay "<<(x+1)*20<<" bath "<<endl;
    }
    else if (x>=4 && x<=5)
    {
            if (m<15)
            cout<<"You have to pay "<<x*50<<" bath "<<endl;
            else
            cout<<"You have to pay "<<(x+1)*50<<" bath "<<endl;
    }
    
    else if (x<8)
    {
    cout<<"You have to pay 500 bath "<<endl;
    }
    }
  
    

    system("pause");
    return 0 ;
    
}
