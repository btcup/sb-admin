#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y; 
    double f,v,a=1385000,b=511500,c=738000,j=694000,z,n;
    char s;
    
    cout<<"-------Car lease calculator-------"<<endl;
    cout<<"Enter car model:";cin>>s;
    cout<<"Enter number of year (1-6):";cin>>z;
    cout<<"Enter your salary:";cin>>y;
    cout<<"----------------------------------------"<<endl;
    if(s!='A'&&s!='B'&&s!='C'&&s!='J')
    cout<<"Error";
    else {
      if(s=='A'){
    f=1385000*0.75;
    cout<<"Financing amount:"<<f<<endl;
    v=(f*z*2.09);
    cout<<"Amount of interest:"<<v<<endl;
    n=(f+v)/(z*12);
    cout<<"Monthly payment:"<<n<<endl;}
  
    else if(s=='B'){
    f=511500*0.75;
    cout<<"Financing amount:"<<f<<endl;
    v=(f*z*1.79);
    cout<<"Amount of interest:"<<v<<endl;
    n=(f+v)/(z*12);
    cout<<"Monthly payment:"<<n<<endl;}
    
    else if(s=='C'){
    f=738000*0.75;
    cout<<"Financing amount:"<<f<<endl;
    v=(f*z*1.99);
    cout<<"Amount of interest:"<<v<<endl;
    n=(f+v)/(z*12);
    cout<<"Monthly payment:"<<n<<endl;}
   
    else if(s=='J'){
    f=694000*0.75;
    cout<<"Financing amount:"<<f<<endl;
    v=(f*z*1.99);
    cout<<"Amount of interest:"<<v<<endl;
    n=(f+v)/(z*12);
    cout<<"Monthly payment:"<<n<<endl;}
    
}
      if(n>(y/2))
      cout<<"Good decision,Enjoy your new car"<<endl;
      else
      cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
    
    
    
    
    
    
    
    system("pause");
    return 0;
}
    
    
    
