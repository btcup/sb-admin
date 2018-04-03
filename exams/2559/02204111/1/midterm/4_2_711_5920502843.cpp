//5920502843 mangkarapong sainak 
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,Max,Min;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    cout<<"Enter 4th number : ";
    cin>>d;
    if(a<b&&a<c&&a<d)
         cout<<"1st number is Minimum";
    else if(b<a&&b<c&&b<d)
         cout<<"2nd number is Minimum";
    else if(c<a&&c<b&&c<d)
         cout<<"3rd number is Minimum";
    else if(d<a&&d<b&&d<c)
         cout<<"4th number is Minimum";
    cout<<endl;
    if(a>b&&a>c&&a>d)
         cout<<"1st number is Maximum";
    else if(b>a&&b>c&&b>d)
         cout<<"2nd number is Maximum";
    else if(c>a&&c>b&&c>d)
         cout<<"3rd number is Maximum";
    else if(d>a&&d>b&&d>c)
         cout<<"4th number is Maximum";
    cout<<endl;
    cout<<"The difference between Min. and Max. is "<<Max-Min<<endl;
    system("pause");
    return 0;
}
