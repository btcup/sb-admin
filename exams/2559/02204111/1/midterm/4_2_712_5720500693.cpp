#include <iostream> //5720500693 Adunvit talaluck
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"Enter 2nd number :";
    cin>>b;
    cout<<"Enter 3rd number :";
    cin>>c;
    cout<<"Enter 4th number :";
    cin>>d;
    if(b<a&&b<c&&b<d)
    cout<<"2nd number is Minimum"<<b<<endl;
    else
    if(a<a&&a<c&&a<d)
    cout<<"1st number is Minimum"<<a<<endl;
    else
    if(c<a&&c<b&&c<d)
    cout<<"3rd number is Minimum"<<c<<endl;
    else
    if(d<a&&d<b&&d<c)
    cout<<"4th number is Minimum"<<d<<endl;
    
    system ("pause");
    return 0;
}
