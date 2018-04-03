#include <iostream>
using namespace std;
int main ()

{
    int a,b,c,d,e,f,g;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2st number : ";
    cin>>b;
    cout<<"Enter 3st number : ";
    cin>>c;
    cout<<"Enter 4st number : ";
    cin>>d;
    {
    if(a<b && a<c && a<d)  
    cout<<"1st number is Minimum "<<endl;
    if(b<a && b<c && b<d)
    cout<<"2st number is Minimum"<<endl;
    if(c<a && c<b && c<d)
    cout<<"3st number is Minimum"<<endl;
    if(d<a && d<b && d<c)
    cout<<"4st number is Minimum"<<endl;
   }
    {
    if(a>b && a>c && a>d)
    cout<<"1st number is Maximum"<<endl;
    if(b>a && b>c && b>d)
    cout<<"2st number is Maximum"<<endl;
    if(c>a && c>b && c>d)
    cout<<"3st number is Maximum"<<endl;
    if(d>a && d>b && d>c)
    cout<<"4st number is Maximum"<<endl;
}
{
    if(a>b && a>c && a>d && c>b && d>b)
    cout<<"The dirfference between Min. and Max. is "<<a-b<<endl;
    if(a>b && a>c && a>d && b>c && d>c)
    cout<<"The dirfference between Min. and Max. is "<<a-c<<endl;
    if(a>b && a>c && a>d && b>d && c>d)
    cout<<"The dirfference between Min. and Max. is "<<a-d<<endl;
    
    
    if(b>a && b>c && b>d && c>a && d>a)
    cout<<"The dirfference between Min. and Max. is "<<b-a<<endl;
    if(b>a && b>c && b>d && a>c && d>c)
    cout<<"The dirfference between Min. and Max. is "<<b-c<<endl;
    if(b>a && b>c && b>d && a>d && c>d)
    cout<<"The dirfference between Min. and Max. is "<<b-d<<endl;
    
    
    if(c>a && c>b && c>d && b>a && d>a)
    cout<<"The dirfference between Min. and Max. is "<<c-a<<endl;
    if(c>a && c>b && c>d && a>b && d>b)
    cout<<"The dirfference between Min. and Max. is "<<c-b<<endl;
    if(c>a && c>b && c>d && a>d && c>d)
    cout<<"The dirfference between Min. and Max. is "<<c-d<<endl;


    if(d>a && d>b && d>c && b>a && c>a)
    cout<<"The dirfference between Min. and Max. is "<<d-a<<endl;
    if(d>a && d>b && d>c && a>b && c>b)
    cout<<"The dirfference between Min. and Max. is "<<d-b<<endl;
    if(d>a && d>b && d>c && a>c && c>c)
    cout<<"The dirfference between Min. and Max. is "<<d-c<<endl;
    }
    
    system ("pause");
   return 0;
}   
