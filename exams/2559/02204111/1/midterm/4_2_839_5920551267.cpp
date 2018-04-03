#include<iostream>  /*Kitchapoln Tunnitisupawong Nisit No. 5920551267 Group 839*/
using namespace std;
int main()
{
    int a,b,c,d,x,y;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    cout<<"Enter 4th number : ";
    cin>>d;
    cout<<endl;
    if(a<b&&a<c&&a<d)
    {
        cout<<"1st number is the Minimum"<<endl;
        x=a;
    }
    if(b<a&&b<c&&b<d)
    {
        cout<<"2st number is the Minimum"<<endl;
        x=b;
    }
    if(c<a&&c<b&&c<d)
    {
        cout<<"3st number is the Minimum"<<endl;
        x=c;
    } 
    if(d<a&&d<c&&d<b)
    {
        cout<<"4st number is the Minimum"<<endl;
        x=d;
    }
    if(a>b&&a>c&&a>d)
    {
        cout<<"1st number is the Maximum"<<endl;
        y=a;
    }
    if(b>a&&b>c&&b>d)
    {
        cout<<"2st number is the Maximum"<<endl;
        y=b;
    }
    if(c>a&&c>b&&c>d)
    {
        cout<<"3st number is the Maximum"<<endl;
        y=c;
    } 
    if(d>a&&d>c&&d>b)
    {
        cout<<"4st number is the Maximum"<<endl;
        y=d;
    }
 
    cout<<"The difference between Min. and Max. is "<<y-x<<endl; 
    
    system("pause");
    return 0;
    
}
