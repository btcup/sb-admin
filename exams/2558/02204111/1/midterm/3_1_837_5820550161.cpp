#include<iostream>
using namespace std;
int main()
{
    int i,a,m,sum=0,N,Y;
    char  x;
    cout<<"Are you member (Y or N) : ";
    cin>>x;
    cout<<"How old are you? : ";
    cin>>a;
    cout<<"Normal price : ";
    cin>>m;
    for(;;)
    {
    if(x==Y)
    {
    if(a<2)
    sum=m%100;
    cout<<"you have to pay "<<sum<<endl;  
    break;
    }
    if(a>=2&&a<=12)
    {
    sum=(m/100)*70;
    cout<<"You have to pay "<<m-sum<<endl;
    break;
    }
    
    if(a>12)
    {
    sum=(m/100)*50;
    cout<<"You have to pay "<<m-sum<<endl;
    break;
    }
    
   
    if(x==N)
    {
    if(a<2)
    sum=(m/100)*100;
    cout<<"you have to pay "<<m-sum<<endl;
    break;
    }
    
    if(a>=2&&a<=10)
    {
    sum=(m/100)*50;
    cout<<"You have to pay "<<m-sum<<endl;
    break;
    }
    
    if(a>10)
    {
    cout<<"You have to pay "<<m<<endl;
    break;
    } 
    }
   
 
 
 system("pause");
 return 0;
}















