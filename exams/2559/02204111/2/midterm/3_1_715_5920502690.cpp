#include<iostream> // 5920502690 thitiwat sailome
using namespace std;
int main ()
{
    float a,b,c,d,e ;
    cout<<"arrivaltime"<<":";
    cin>>a;
    cout<<"leav time"<<":";
    cin>>b;
    c=int(((b-a)-(int(b-a)/1))*100)%600 ;
    
    cout<<"hours"<<int(b-a)+(int(b-a)%1)/60<<"and"<<int(((b-a)-(int(b-a)/1))*100)%600<<"min"<<endl;
        
     if (c<=15)
    { 
    e=int(b-a) ;
    if (e<4.15)
    cout<< "your have to pay 0 bath";
    if (e<6.15)
    cout<<"your have to pay "<<int((e-3)*20)<<endl;
    else if(d<7.15)
    cout<<"your have to pay "<<int((e-3)*20+(d-7)*50);
    else 
    cout<<"your have to pay "<<500 ;
}
    else if(c>=15)
    {
    d= (int(b-a)+1) ;
    if (d<4.15)
    cout<< "your have to pay 0 bath";

    if (d<6.15)
    cout<<"your have to pay "<<(int(d-3)*20)<<endl;
    
    else if(d<8.15)
    cout<<"your have to pay "<<((int(d-3)*20)+int(d-7)*50);

    else 
    cout<<"your have to pay "<<500 ;
    }
    else 
    cout<<"you can't leav before arival time";
    system ("pause");
    return 0 ;
}
