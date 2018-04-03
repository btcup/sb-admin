#include<iostream>
using namespace std;
int main()
{
          char h;
          int A,B,C,J;
          A = 1385000;
          B = 511500;
          C = 738000;
          J = 694000;
          float z,d,e,f,g,b,c,p,x,y;
          e = 2.09;
          b = 1.79;
          p = 1.99;
          z = 0.25;
          cout<<"------- Car lease calculator -------"<<endl;
          cout<<"Enter car model: ";
          cin>>h;
          cout<<"Enter number of years (1-6) : ";
          cin>>x;
          cout<<"Enter your salary : ";
          cin>>y;
          cout<<"-------------------------------------"<<endl;
{
             if(h==B)
             {
          d = B-(B*z);
          cout<<"Financing amount : "<<d<<endl;
          f = d*b*x/100;
          cout<<"Amount of interest : "<<f<<endl;
          g = (d+f)/(x*12);
          cout<<"Monthly payment : "<<g<<endl;
          }
             else if(h==C)
             {
          d = C-(C*z);
          cout<<"Financing amount : "<<d<<endl;
          f = d*p*x/100;
          cout<<"Amount of interest : "<<f<<endl;
          g = (d+f)/(x*12);
          cout<<"Monthly payment : "<<g<<endl;
          }
             else if(h==J)
             {
          d = J-(J*z);
          cout<<"Financing amount : "<<d<<endl;
          f = d*p*x/100;
          cout<<"Amount of interest : "<<f<<endl;
          g = (d+f)/(x*12);
          cout<<"Monthly payment : "<<g<<endl;
          }
}
          
          if(g>y/2)
          cout<<"Good decision,Enjoy your new care"<<endl;
          else
          cout<<"The monthly payment is over than 50% of your salary!!"<<endl;
          
          system("pause");
          return 0;
}
          
