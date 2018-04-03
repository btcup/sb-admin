//5620551601 Ekkarit chuenpear
#include<iostream>
using namespace std;
int main()
{
    int x,y,z,a,b,c,d,i,e,f,g,h,j,k,l,m,n;
    i=1;
    y=0;
    z=0;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    j=0;
    k=0;
    l=0;
    m=0;
    n=0;
    do
{
    cout<<"input value: ";
    cin>>x;
    if(i>=1&&i<=4)
{
    if(i==7)
    {
    y=x;
    e=y*1000000;
    }
    if(i==6)
    {
    z=x;
    f=z*100000;
    }
    if(i==5)
    {
    a=x;
    g=a*10000;
    }
    if(i==4)
    {
    b=x;
    h=b*1000;
    }
    if(i==3)
    {
    d=x;
    j=d*100;
    }
    if(i==2)
    {
    k=x;
    l=k*10;
    }
   if(i==1)
    {
    m=x;
    n=m*1;
    }
    
}  
    
     i++;
}
 
   
    while(x>=0); 
    if(i=5){
    cout<<"Your money is "<<m<<l<<d<<b<<" = "<<h<<"+"<<j<<"+"<<l<<"+"<<n<<endl;}
    if(i=6){
    cout<<"Your money is "<<m<<l<<d<<b<<a<<" = "<<g<<"+"<<h<<"+"<<j<<"+"<<l<<"+"<<n<<endl;}
    if(i=7){
    cout<<"Your money is "<<m<<l<<d<<b<<z<<" = "<<f<<"+"<<g<<"+"<<h<<"+"<<j<<"+"<<l<<"+"<<n<<endl;}
    if(i=8){
    cout<<"Your money is "<<m<<l<<d<<b<<z<<y<<" = "<<e<<"+"<<f<<"+"<<g<<"+"<<h<<"+"<<j<<"+"<<l<<"+"<<n<<endl;}
    
    
    
    
    
    
    system("pause");
    return 0;
}
