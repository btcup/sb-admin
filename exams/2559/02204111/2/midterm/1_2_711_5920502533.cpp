//5920502533 Yossapon Nebsri
#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    do
    {
        cout<<"Enter N: ";
        cin>>n;
        }while(n<0);
        i=2;
        while (i<n)
       {
        if(n%i!=0)
        {
        i=i+1;
        }
        if(n%i==0)
        sum=i;
        i=i+1;
}
cout<<"The greatest factor of "<<n<<"is"<<sum;

    system ("pause");
    return 0;
}       
