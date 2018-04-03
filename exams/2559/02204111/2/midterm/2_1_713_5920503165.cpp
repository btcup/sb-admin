#include <iostream>
using namespace std;
int main()
{
    char model;
    float x,d=0.25;
    int year,salary,n,m;
    do{
    cout<<"--------Car lease calculator--------"<<endl;
    cout<<"Enter car model: ";
    cin>>model;
    cout<<"Enter number of years(1-6): ";
    cin>>year;
    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<"------------------------------------"<<endl;
    if(model=='A'){
    {
               n= 1385000-(1385000*0.25); 
               m= n*(2.09*year); 
               x= (n+m)/year; 
     }
      cout<<"Fanancing amount:"<<n<<endl;
      cout<<"Amount of interest:"<<m<<endl;
      cout<<"Monthly payment:"<<x<<endl;}
              
    if(model=='B'){
    {
               n=511500-(511500*0.25);
               m=(n*1.79)*year;
               x=(n+m)/year ;
    }
               cout<<"Fanancing amount:"<<n<<endl;
               cout<<"Amount of interest:"<<m<<endl;
               cout<<"Monthly payment:"<<x<<endl; }
    if(model=='C'){
    {
               n=738000-(738000*0.25);
               m=(n*1.99)*year;
               x=(n+m)/year ;
    }
               cout<<"Fanancing amount:"<<n<<endl;
               cout<<"Amount of interest:"<<m<<endl;
               cout<<"Monthly payment:"<<x<<endl;}
    if(model=='J'){
    {
               n=694000-(694000*0.25);
               m=(n*1.99)*year;
               x=(n+m)/year ;
    }
               cout<<"Fanancing amount:"<<n<<endl;
               cout<<"Amount of interest:"<<m<<endl;
               cout<<"Monthly payment:"<<x<<endl;}
               }
               while(x<=(year*0.5));{
               cout<<"Good decision,Enjoy your new car "<<endl;}
              
                     
    system("pause");
    return 0;
}
    
    
