// 5920551186 worrapon ploymai
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    cout<<"Enter 4th number : ";
    cin>>d;
    if(d>c&&c>b&&b>a)
    {
        cout<<"1st number is Minimum"<<endl;
        cout<<"4th number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<d-a<<endl;
    }
    else if(a>b&&b>c&&c>d)
    {
        cout<<"4th number is Minimum"<<endl;
        cout<<"1st number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<a-d<<endl;
    }
    else if(b>a&&a>c&&c>d)
    {
        cout<<"4th number is Minimum"<<endl;
        cout<<"2nd number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<b-d<<endl;
    }
    else if(c>d&&d>a&&a>b)
    {
        cout<<"2nd number is Minimum"<<endl;
        cout<<"3rd number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<c-b<<endl;
    }
    else if(d>c&&c>a&&a>b)
    {
        cout<<"2nd number is Minimum"<<endl;
        cout<<"4th number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<d-b<<endl;
    }
    else if(b>a&&a>d&&d>c)
    {
        cout<<"3rd number is Minimum"<<endl;
        cout<<"2nd number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<b-c<<endl;
    } 
    else if(c>b&&b>a&&a>d)
    {
        cout<<"4th number is Minimum"<<endl;
        cout<<"3rd number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<c-d<<endl;
    }                
    else if(d>a&&a>b&&b>c)
    {
        cout<<"3rd number is Minimum"<<endl;
        cout<<"4th number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<d-c<<endl;
    }
    else if(c>d&&d>b&&b>a)
    {
        cout<<"1st number is Minimum"<<endl;
        cout<<"3rd number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<c-a<<endl;
    }
    else if(a>b&&b>d&&d>c)
    {
        cout<<"3rd number is Minimum"<<endl;
        cout<<"1st number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<a-c<<endl;
    }
    else if(a>c&&c>d&&d>b)
    {
        cout<<"2nd number is Minimum"<<endl;
        cout<<"1st number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<a-b<<endl;
    }
    else if(b>c&&c>d&&d>a)
    {
        cout<<"1st number is Minimum"<<endl;
        cout<<"2nd number is Maximum"<<endl;
        cout<<"The difference between Min. and Max. is "<<b-a<<endl;
    }

    
    
    system("pause");
    return 0;
}
