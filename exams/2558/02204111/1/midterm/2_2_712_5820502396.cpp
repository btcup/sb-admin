#include<iostream>
using namespace std;
int main()
{
    double h,w,d,sum=0,m=0;
    char x,y;
    cout<<"Welcome to the Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter(H x W x D) : ";
    cin>>h>>w>>d;
    cout<<"Please select floor tile...(A/B/C): ";
    cin>>x;
    cout<<"Please select wall tile...(A/B/C): ";
    cin>>y;
    if(x=='a'||x=='A')
    {
    
           m=w*d*4*17;
           sum=h*w*d/(0.30*0.30);
    }
    else if(x=='b'||x=='B')
    {
         }
    else if(x=='c'||x=='C')
    {
     }     
    cout<<m<<" "<<sum;
    system("pause");
    return 0;
}
