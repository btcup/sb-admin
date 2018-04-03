#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 1st number : ";
    cin>>b;
    cout<<"Enter 1st number : ";
    cin>>c;
    cout<<"Enter 1st number : ";
    cin>>d;
    cout<<endl;
    if(a<b&&a<c&&a<d&&b>c&&b>d)//a//
    {
    cout<<"1st number is Minimum"<<endl;
    cout<<"2st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<b-a<<endl;
    }
    if(a<b&&a<c&&a<d&&c>b&&c>d)
    {
    cout<<"1st number is Minimum"<<endl;
    cout<<"3st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<c-a<<endl;
    }
    if(a<b&&a<c&&a<d&&d>b&&d>c)
    {
    cout<<"1st number is Minimum"<<endl;
    cout<<"4st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<d-a<<endl;
    }
    
    
    if(b<a&&b<c&&b<d&&a>c&&a>d)//b//
    {
    cout<<"2st number is Minimum"<<endl;
    cout<<"1st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<a-b<<endl;
    }
    if(b<a&&b<c&&b<d&&c>a&&c>d)
    {
    cout<<"2st number is Minimum"<<endl;
    cout<<"3st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<c-b<<endl;
    }
    if(b<a&&b<c&&b<d&&d>a&&d>c)
    {
    cout<<"2st number is Minimum"<<endl;
    cout<<"4st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<d-b<<endl;
    }
    
    
    if(c<a&&c<b&&c<d&&a>b&&a>d)//c//
    {
    cout<<"3st number is Minimum"<<endl;
    cout<<"1st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<a-c<<endl;
    }
    if(c<a&&c<b&&c<d&&b>a&&b>d)
    {
    cout<<"3st number is Minimum"<<endl;
    cout<<"2st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<b-c<<endl;
    }
    if(c<a&&c<b&&c<d&&d>a&&d>b)
    {
    cout<<"3st number is Minimum"<<endl;
    cout<<"4st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<d-c<<endl;
    }
    
    
    if(d<a&&d<b&&d<c&&a>b&&a>c)//d//
    {
    cout<<"4st number is Minimum"<<endl;
    cout<<"1st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<a-d<<endl;
    }
    if(d<a&&d<b&&d<c&&b>a&&b>c)
    {
    cout<<"4st number is Minimum"<<endl;
    cout<<"2st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<b-d<<endl;
    }
    if(d<a&&d<b&&d<c&&c>a&&c>b)
    {
    cout<<"4st number is Minimum"<<endl;
    cout<<"3st number is Maximum"<<endl;
    cout<<"The difference between Min. and Max. is "<<c-d<<endl;
    }
    system("pause");
    return 0;
}
