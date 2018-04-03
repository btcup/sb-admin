#include<iostream>
#include<cmath>
using namespace std;
int main(){
char x,y;
double z,a,b,c,d;
cout<<"Enter objective (Utilization, Waste) : ";
cin>>x;
       if(x=='U')
       {
                 cout<<"Enter utilization type (Business, Agriculture) : ";
                        cin>>y;
                 cout<<"land cost(million) : ";
                        cin>>z;
                 cout<<"Enter building cost (million) : ";
                        cin>>a;
                 cout<<"building age : ";
                        cin>>b;
                        if(b<=10)
a=a*1.5/100*b;
else if(b<=40)
a=a*15/100*1.8/100*(b-10);
else
a=a*70.8/100;
c=a+z;
                               if(y=='B')
                                     {
                                         cout<<"Your estate cost is "<<c<<" ("<<z<<"+"<<a<<") million bath.";   
                                         if(c<20)
                                         cout<<"The land tax is "<<c*0.3/100<<" million bath.";
                                         if(c<50)
                                         cout<<"The land tax is "<<c*0.5/100<<" million bath.";
                                         else
                                         cout<<"The land tax is "<<c*0.7/100<<" million bath.";
                                         }
                               else
                                   {
                                         cout<<"Your estate cost is "<<c<<" ("<<z<<"+"<<a<<") million bath.";   
                                         if(c<30)
                                          cout<<"The land tax is exemption.";
                                         if(c<60)
                                         cout<<"The land tax is "<<c*0.06/100<<" million bath.";
                                         else
                                         cout<<"The land tax is "<<c*0.12/100<<" million bath.";    
                                   }
                 }
       else
       {
           cout<<"Enter land cost(million) : ";
                        cin>>z;
           cout<<"land age : ";
                        cin>>d;
                               if(d<=3)
                               cout<<"The land tax is exemption.";
                               else if(d<=6)
                               cout<<"The land tax is "<<z*1.2/100<<" million bath.";
                               else
                               cout<<"The land tax is "<<z*2.4/100<<" million bath.";
                                  }
system("pause");
return 0;
}
