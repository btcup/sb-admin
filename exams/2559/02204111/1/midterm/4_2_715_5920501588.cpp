#include<iostream>
using namespace std;
int main ()
{
    /*5920501588 Phanutchaporn Ong-ard*/
    int n1,n2,n3,n4,max,min;
    cout<<"Enter 1st number : ";
    cin>>n1;
    cout<<"Enter 2nd number : ";
    cin>>n2;
    cout<<"Enter 3rd number : ";
    cin>>n3;
    cout<<"Enter 4th number : ";
    cin>>n4;
    
    if(n1<n2&&n1<n3&&n1<n4)
    {cout<<"1st number is Minimum"<<endl;
    min=n1;}
    else if (n2<n3&&n2<n4&&n2<n1)
    {cout<<"2nd number is Minimum"<<endl;
    min=n2;}
    else if (n3<n2&&n3<n1&&n3<n4)
    {cout<<"3rd number is Minimum"<<endl;
    min=n3;}
    else if (n4<n1&&n4<n2&&n4<n3)
    {cout<<"4th number is Minimum"<<endl;
    min=n4;}
    
    if(n1>n2&&n1>n3&&n1>n4)
    {cout<<"1st number is Maximum"<<endl;
    max=n1;}
    else if (n2>n3&&n2>n4&&n2>n1)
    {cout<<"2nd number is Maximum"<<endl;
    max=n2;}
    else if (n3>n2&&n3>n1&&n3>n4)
    {cout<<"3rd number is Maximum"<<endl;
    max=n3;}
    else if (n4>n1&&n4>n2&&n4>n3)
    {cout<<"4th number is Maximum"<<endl;
    max=n4;}
    
    cout<<"The difference between Min. and Max. is "<<max-min<<endl;
    system ("pause");
    return 0;
}
