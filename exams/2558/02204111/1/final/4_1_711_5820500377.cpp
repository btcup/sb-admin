#include<iostream>
using namespace std;
void Dec2X(int s,int b)
{
     int d,z=0,r[100];
     while(s>0)
     {
     d=s%b;
     s=s/b;
     z++;
     r[z]=d;
     }
     for(z=z;z>0;z--)
     {
                     cout<<r[z];
     }
     }
int main()
{
    int i=0,j,k,b,a=1;
    int s;
    while(a>0)
    {
    cout<<"Enter decimal number: ";
    cin>>s;
    if(s>=0)
    {
    cout<<"Enter base (2-9): ";
    cin>>b;
    cout<<s<<"b10 is ";
    Dec2X(s,b);
    cout<<"b"<<b;
    cout<<endl;
}
if(s<0)
{
       a=0;
}
}

    system("pause");
    return 0;
}
