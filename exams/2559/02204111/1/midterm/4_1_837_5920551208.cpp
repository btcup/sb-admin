#include<cmath>
#include<iostream>
using namespace std;
int main()
{  
    int a,b=0,c,sum=0,d=1,e=0,f=1,g;
    
    
    for(a=0;;e++)
    {cout<<"input value : ";
    cin>>a;
    if (a<0){
    break;}
    if (a>=10){
    cout<<"Invalid Input!!"<<endl<<endl;
    continue;}
    d=d*10;
    f=f*10;
    sum =(sum*10)+a;}
    
    d=d/100;
    f=f/10;
    
    cout<<endl;
    cout<<"Your money is "<<sum<<" = ";
    //cout<<d;  100
    //cout<<sum%f;  1101&1000=101
    //cout<<sum-(sum%f);  1000
    g=e-1;
    
    for(;e>=0;e--)
    {cout<<sum-(sum%f);
    if(g==0){break;}
    cout<<" + "; 
    g--;
    sum=sum%f;
    f=f/10;}
    
    cout<<endl;
    
    
    
    
    
    system("pause");
    return 0;

}
    
    
                   
