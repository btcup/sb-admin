//5920502274 Jirapat Thonghasoon
#include<iostream>
using namespace std;
int main ()
{
    int a;
    float x,y,z,b,c;
    char t;
    if(t=='C'||t=='c'||t=='M'||t=='m')
    {
    cout>>"Type of vehicle ((C)Car or (M)Motorcycle : ";
    cin>>t;
}
    cout<<"Arrival time : ";
    cin>>y;
    cout<<"Leave time : ";
    cin>>z;
    a=z-y;
    if(a<3)
{
    if(t=='C'||t=='c')
    {
                      c=a*0;
                      cout<<a<<"hours"<<a<<"minutes";
                      cout<<"You have to pay "<<c<<" bath";
    }
    else if(a<6)
    {
    if(t=='C'||t=='c')        
    { 
                      c=a*30;
                      cout<<a<<"hours"<<a<<"minutes";
                      cout<<"You have to pay "<<c<<" bath";
    }
}
     else if(a<9)
    {
    if(t=='C'||t=='c')        
    { 
                      c=a*50;
                      cout<<a<<"hours"<<a<<"minutes";
                      cout<<"You have to pay "<<c<<" bath";
    }
}
            
                 else if(a>8)
    {
    if(t=='C'||t=='c')        
    { 
                      c=500;
                      cout<<a<<"hours"<<a<<"minutes";
                      cout<<"You have to pay "<<c<<" bath";
    }
}
}
    if(a<4)
{
    if(t=='M'||t=='m')
    {
                      c=a*0;
                      cout<<a<<"hours"<<a<<"minutes";
                      cout<<"You have to pay "<<c<<" bath";
    }
    else if(a<8)
    {
    if(t=='M'||t=='m')        
    { 
                      c=a*30;
                      cout<<a<<"hours"<<a<<"minutes";
                      cout<<"You have to pay "<<c<<" bath";
    }
}

            
                 else if(a>7)
    {
    if(t=='M'||t=='m')        
    { 
                      c=150;
                      cout<<a<<"hours"<<a<<"minutes";
                      cout<<"You have to pay "<<c<<" bath";
    }
}
system("pause");
return 0;
}
    
