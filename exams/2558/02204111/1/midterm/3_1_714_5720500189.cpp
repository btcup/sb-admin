#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    float x,y  ;
    char name ;
    cout<<"Are you member (Y or N )"<<name;
    cin >> name ;
    cout<<"How old are you?:"<<x;
    cin>> x ;
    cout<<"Normal price :"<<y;
    cin >> y ;
    if (name=='Y')
    {
     if(x<2)
    { 
    cout<<"you have to pay"<<y*1.0<<endl;
    }
     else if(x>=2||x<12)
    {
    cout<<"you have to pay"<<y*0.7<<endl;
    }
     else if(x>=12 )
    {
    cout<<"you have to pay"<<y*0.5<<endl;   
    }
    }
     else if( name=='R')
    {
     if(x<2)
    { 
    cout<<"you have to pay"<<y*1.0<<endl;
    }
     else if(x>=2||x<10)
    {
    cout<<"you have to pay"<<y*0.5<<endl;
    }
     else if(x>=10 )
    {
    cout<<"you have to pay"<<y<<endl;   
    }
    }
system ("pause");
return 0 ;
}
