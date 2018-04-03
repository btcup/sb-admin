#include <iostream>
using namespace std;
int main()
{char model;
float year,salary;
float x,y,z;
    cout<<"-------Car lease calculator------------"<<endl;
 cout<<"Enter car model:";
 cin>>model;
 cout<<"Enter number of years (1-6):";
 cin>>year;
 cout<<"Enter your salary:";
 cin>>salary;
 cout<<"-----------------------------------------"<<endl;
 cout<<"Financing amount:";
                  if(model=='A')
                  cout<<(x=1385000-0.25*1385000)<<endl;
                  else if(model=='B')
                  cout<<(x=511500-511500*0.25)<<endl;
                  else if(model=='C')
                  cout<<(x=738000-738000*0.25)<<endl;
                  else if(model=='J')
                  cout<<(x=694000-694000*0.25)<<endl;
 cout<<"Amount of interest:";
                  if(model=='A')
                  cout<<(y=x*(2.09/100)*year)<<endl;
                  else if(model=='B')
                  cout<<(y=x*(1.79/100)*year)<<endl;
                  else if(model=='C')
                  cout<<(y=x*(1.99/100)*year)<<endl;
                  else if(model=='J')
                  cout<<(y=x*(1.99/100)*year)<<endl;
 cout<<"Monthly payment:";
                if(model=='A')
                  cout<<(z=(y+x)/(12*year))<<endl;
                  else if(model=='B')
                  cout<<(z=(y+x)/(12*year))<<endl;
                  else if(model=='C')
                  cout<<(z=(y+x)/(12*year))<<endl;
                  else if(model=='J')
                  cout<<(z=(y+x)/(12*year))<<endl;
if(salary/2<z)
cout<<"The monthy payment is over than 50% of your salary!!"<<endl;
else if(salary/2>z)
cout<<"Good decision,Enjoy your new car"<<endl;
system("pause");
return 0;
}
                
                
                                 
 
