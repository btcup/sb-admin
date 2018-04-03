//5920503734 Duangkamol Wongnammai
#include <iostream>
using namespace std;
int main()
{
    int x,a,b,c,d,min,max,y;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"Enter 3rd number:";
    cin>>c;
    cout<<"Enter 4th number:";
    cin>>d;
    
        if(a<b&&a<c&&a<d)
        cout<<a<<"number is Minimum"<<endl;
       
        if(b<a&&b<c&&b<d)
        cout<<b<<"number is Minimum"<<endl;
        
        if(c<a&&c<b&&c<d)
        cout<<c<<"number is Minimum"<<endl;
       
        if(d<a&&d<b&&d<c)
        cout<<d<<"number is Minimum"<<endl;
        
        if(a>b&&a>c&&a>d)
        cout<<a<<"number is Maximum"<<endl;
       
        if(b>a&&b>c&&b>d)
        cout<<b<<"number is Maximum"<<endl;
       
        if(c>a&&c>b&&c>d)
        cout<<c<<"number is Maximum"<<endl;
        
        if(d>a&&d>b&&d>c)
        cout<<d<<"number is Maximum"<<endl;
    
        y=max-min;
        cout<<"The differance between Min. and Max. is"<<y<<endl;   
     
system("pause");
return 0;
}
