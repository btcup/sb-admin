#include <iostream>
using namespace std;
int main() 
{
    int n1,n2,n3,n4,min,max;
    cout<<"Enter 1st number : ";
    cin>>n1;
    cout<<"Enter 2st number : ";
    cin>>n2;
    cout<<"Enter 3st number : ";
    cin>>n3;
    cout<<"Enter 4st number : ";
    cin>>n4;
    if(n1>n2&&n1>n3&&n1>n4){max=n1;cout<<"1st number is maximum"<<endl;}
    else if(n2>n1&&n2>n3&&n2>n4){max=n2;cout<<"2st number is maximum"<<endl;}
    else if(n3>n1&&n3>n2&&n3>n4){max=n3;cout<<"3st number is maximum"<<endl;}
    else if(n4>n1&&n4>n2&&n4>n3){max=n4;cout<<"4st number is maximum"<<endl;}
    else if(n1<n2&&n1<n3&&n1<n4){min=n1;cout<<"1st number is minimum"<<endl;}
    else if(n2<n1&&n2<n3&&n2<n4){min=n2;cout<<"2st number is minimum"<<endl;}
    else if(n3<n1&&n3<n2&&n3<n4){min=n3;cout<<"3st number is minimum"<<endl;}
    else if(n4<n1&&n4<n2&&n4<n3){min=n4;cout<<"4st number is minimum"<<endl;}
    cout<<"The difference between Min. and Max. is "<<max-min<<endl;
    
    return 0;
}
