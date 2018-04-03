#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<< "Enter 1st number :" <<(" ");
    cin>>a;
    cout<< "Enter 2nd number :" <<(" ");
    cin>>b;
    cout<< "Enter 3rd number :" <<(" ");
    cin>>c;
    cout<< "Enter 4th number :" <<(" ");
    cin>>d;
    if(b>a&&c>a&&d>a)//a is mini
    {
     cout<<"1st number is Minimum"<<endl;
      if(b>c&&b>d)
     {
     cout<<"2nd  number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<b-a<<endl;
     }
      if(c>b&&c>d)
     {
     cout<<"3rd  number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<c-a<<endl;
     }
      if(d>c&&d>b)
     {
     cout<<"4th number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<d-a<<endl;
     }
    }
      if(a>b&&c>b&&d>b)//b mini
    {
     cout<<"2nd  number is Minimum"<<endl;
      if(a>c&&a>d)
     {
     cout<<"1st number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<a-b<<endl;
     }
      if(c>a&&c>d)
     {
     cout<<"3rd  number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<c-b<<endl;
     }
      if(d>c&&d>a)
     {
     cout<<"4th number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<d-b<<endl;
     }
    }
      if(a>c&&b>c&&d>c)//c mini
    {
     cout<<"3rd number is Minimum"<<endl;
      if(b>a&&b>d)
     {
     cout<<"2nd  number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<b-c<<endl;
     }
      if(a>b&&a>d)
     {
     cout<<"1st  number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<a-c<<endl;
     }
      if(d>a&&d>b)
     {
     cout<<"4th number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<d-c<<endl;
     }
    }
      if(a>d&&b>d&&c>d)//d mini
    {
     cout<<"4th number is Minimum"<<endl;
      if(b>c&&b>a)
     {
     cout<<"2nd  number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<b-d<<endl;
     }
      if(c>b&&c>a)
     {
     cout<<"3rd  number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<c-d<<endl;
     }
      if(a>b&&a>c)
     {
     cout<<"1st number is Maximum"<<endl;
     cout<<"The difference between Min. and Max. is"<<a-d<<endl;
     }
    }
    system("pause");
    return 0;
}
