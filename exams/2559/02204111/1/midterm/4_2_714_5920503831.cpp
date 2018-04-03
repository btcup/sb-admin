#include<iostream> //5920503831 Name phanuwat Rodklongtan
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2st number :";
    cin>>b;
    cout<<"Enter 3st number :";
    cin>>c;
    cout<<"Enter 4st number :";
    cin>>d;
    cout<<endl; 
    if(a>b&&a>c&&a>d)
    cout<<"1st nunber is Maximum"<<endl;
    if(a<b&&a<c&&a<d)
    cout<<"1st nunber is Minimum"<<endl;
    if(b>a&&b>c&&b>d)
    cout<<"2nd nunber is Maximum"<<endl;
    if(b<a&&b<c&&b<d)
    cout<<"2nd nunber is Minimum"<<endl;
    if(c>a&&c>b&&c>d)
    cout<<"3rd nunber is Maximum"<<endl;
    if(c<a&&c<b&&c<d)
    cout<<"3rd nunber is Minimum"<<endl;
    if(d>a&&d>b&&d>c)
    cout<<"4th nunber is Maximum"<<endl;
    if(d<a&&d<b&&d<c)
    cout<<"4th nunber is Minimum"<<endl;
    
    
    if(a>b&&a>c&&a>d && b<a&&b<c&&b<d )
    cout<<"The difference between Min. and Max. is "<<(a-b)<<endl;
    if(a>b&&a>c&&a>d && c<a&&c<b&&c<d )
    cout<<"The difference between Min. and Max. is "<<(a-c)<<endl;
    if(a>b&&a>c&&a>d && d<a&&d<b&&d<c )
    cout<<"The difference between Min. and Max. is "<<(a-d)<<endl;
    
    if(b>a&&b>c&&b>d && a<b&&a<c&&a<d )
    cout<<"The difference between Min. and Max. is "<<(b-a)<<endl;
    if(b>a&&b>c&&b>d && c<a&&c<b&&c<d )
    cout<<"The difference between Min. and Max. is "<<(b-c)<<endl;
    if(b>a&&b>c&&b>d && d<a&&d<b&&d<c )
    cout<<"The difference between Min. and Max. is "<<(b-d)<<endl;
    
    if(c>a&&c>b&&c>d && a<b&&a<c&&a<d)
    cout<<"The difference between Min. and Max. is "<<(c-a)<<endl;
    if(c>a&&c>b&&c>d && b<a&&b<c&&b<d)
    cout<<"The difference between Min. and Max. is "<<(c-b)<<endl;
    if(c>a&&c>b&&c>d && d<a&&d<b&&d<c)
    cout<<"The difference between Min. and Max. is "<<(c-d)<<endl;
    
    if(d>a&&d>b&&d>c && a<b&&a<c&&a<d)
    cout<<"The difference between Min. and Max. is "<<(d-a)<<endl;
    if(d>a&&d>b&&d>c && b<a&&b<c&&b<d)
    cout<<"The difference between Min. and Max. is "<<(d-b)<<endl;
    if(d>a&&d>b&&d>c && c<a&&c<b&&c<d)
    cout<<"The difference between Min. and Max. is "<<(d-c)<<endl;
    
    system("pause");
    return 0;
}    
