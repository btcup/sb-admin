#include<iostream>
using namespace std;
int main()
{
    char g;
    float x,y,f,z,m;
    cout<<"--------- Car lease calculator ---------"<<endl;
    cout<<"Enter car model : ";
    cin>>g;
    cout<<"Enter numer of years 1-6) : ";
    cin>>x;
    cout<<"Enter your salary : ";
    cin>>y;
    if( g=='A'||g=='a')
    { 
      f=1385000*75/100;
      z=f*2.09*x;
      m=(f+z)/x/12;
      }
      else if( g=='B'||g=='b')
    { 
      f=511500*75/100;
      z=int f*1.79*x;
      m=(f+z)/x/12;
      }
      else if( g=='C'||g=='c')
    { 
      f=738000*75/100;
      z=f*1.99*x;
      m=(f+z)/x/12;
      }
    else if( g=='J'||g=='j')
    { 
      f=694000*75/100;
      z=f*1.99*x;
      m=(f+z)/x/12;
      }
    cout<<"----------------------------"<<endl;
    cout<<"financing aount : "<<f<<endl;
    cout<<"Amount of interest : "<<z<<endl;
    cout<<"monthly payent : "<<m<<endl;
    if (m>y/2)
        {
                  cout<<"The monthly payment is over than 50% of your salaery!!";
                  }
                  else if (m<=y/2)
                  {
                       cout<<"Good decision,Enjoy your new car";
                       }
    
    system("pause");
    return 0;
}

