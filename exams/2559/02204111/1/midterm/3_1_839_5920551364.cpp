//5920551364 Chittavon Chaisatapakorn
#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,g,h;
    cout<<"input value : ";
    cin>>a;
    while(a>0){
    if(a>=10){
    cout<<"Invalid Input!!Try again  "<<endl;
}
    else if (b<0){
            cout<<"Total is --"<<endl;break;
            }
    cout<<"input value : ";
    cin>>b;
    if(b>=10){
           cout<<"Invalid Input!!Try again New number "<<endl;

           }
            else if (b<0){
            cout<<"Total is "<<a<<endl;break;
            }
    cout<<"input value : ";
    cin>>c;
    if(c>=10){
           cout<<"Invalid Input!!Try again "<<endl;
           }
           else if (c<0){
    cout<<"Total is "<<a<<b<<endl;break;
    }
    cout<<"input value : ";
    cin>>d;
    if(d>=10){
           cout<<"Invalid Input!!Try again "<<endl;
           }
           else if (d<0){
    cout<<"Total is "<<a<<b<<c<<endl;break;
}
    cout<<"input value : ";
    cin>>e;
    if(e>=10){
    cout<<"Invalid Input!!Try again "<<endl;
}
    else if (e<0){
    cout<<"Total is "<<a<<","<<b<<c<<d<<endl;break;
}
    cout<<"input value : ";
    cin>>f;
    if(f>=10){
           cout<<"Invalid Input!!Try again "<<endl;
           }
           else if (f<0){
    cout<<"Total is "<<a<<b<<","<<c<<d<<e<<endl;break;
}
    cout<<"input value : ";
    cin>>g;
    if(g>=10){
           cout<<"Invalid Input!!Try again "<<endl;
           }
           else if (g<0){
    cout<<"Total is "<<a<<b<<c<<","<<d<<e<<f<<endl;break;
}
    cout<<"input value : ";
    cin>>h;
    if(h>=10){
           cout<<"Invalid Input!!Try again "<<endl;
           }
    else if (h<0){
    cout<<"Total is "<<a<<","<<b<<c<<d<<","<<e<<f<<g <<endl;break;
}
}
    system ("pause");
    return 0;
}
